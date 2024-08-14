/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/24 21:23:31 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	create_stacks(int argc, char **argv, t_list *l)
{
	int	i;

	i = 0;
	while (argc > 1)
	{
		if (argv[i + 1][0] == '0' && argv[i + 1][1] == '\0')
			l -> sa[i] = 0;
		else
		{
			l -> sa[i] = ft_atoi(argv[i + 1], l);
			if (l->atoierror == 1)
			{
				ft_freest(l);
				ft_werror();
			}
		}
		i++;
		argc--;
	}
	return (1);
}

int	init_list(int argc, t_list *l)
{
	l -> sa = malloc(sizeof(int) * (argc - 1));
	if (!l -> sa)
	{
		free(l);
		return (0);
	}
	l -> sb = malloc(sizeof(int) * (argc - 1));
	if (!l -> sb)
	{
		free(l -> sa);
		free(l);
		return (0);
	}
	l -> saux = malloc(sizeof(int) * (argc - 1));
	if (!l -> saux)
	{
		free(l -> sa);
		free(l -> sb);
		free(l);
		return (0);
	}
	l -> len = argc - 1;
	l -> lena = argc - 1;
	l -> lenb = 0;
	return (1);
}

void	push_swap(t_list *l)
{
	if (l->len <= 3)
		array3(l->sa, l);
	if (l->len == 4)
		array4(l->sa, l);
	if (l->len == 5)
		array5(l->sa, l);
	if (l->len > 5)
		set_index(l);
	if (l->len > 5 && l->len <= 20)
	{
		split_chunks(l, 2);
		solve(l);
	}
	if (l->len > 20 && l->len < 150)
	{
		split_chunks(l, 4);
		solve(l);
	}
	if (l->len >= 150)
	{
		split_chunks(l, 9);
		solve(l);
	}
}

void	ft_freest(t_list *l)
{
	free(l->sa);
	free(l->sb);
	free(l->saux);
	free(l);
}

int	main(int argc, char **argv)
{
	t_list	*l;

	if (argc == 1)
		return (0);
	l = malloc(sizeof(t_list));
	if (!l)
		return (0);
	if (init_list(argc, l) == 0)
		ft_werror();
	if (create_stacks(argc, argv, l) == 0)
		ft_werror();
	if (!check_arg(argc, argv, l))
	{
		ft_freest(l);
		return (0);
	}
	push_swap(l);
	ft_freest(l);
	return (0);
}
