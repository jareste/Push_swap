/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:37:14 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:25:47 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	is_duplicate(int ac, char **av, t_list *l)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		temp = ft_atoi(av[i], l);
		while (j < ac)
		{
			if (i != j && temp == ft_atoi(av[j], l))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	arg_is_number(char *argv)
{
	int	i;

	if (argv[0] == '\0')
		return (0);
	i = 0;
	if ((argv[0] == '-' || argv[0] == '+') && argv[1])
		i = 1;
	while (argv[i] && (argv[i] > '0' && argv[i] < '9'))
		i++;
	if (argv[i] && (argv[i] < '0' || argv[i] > '9'))
		return (0);
	return (1);
}

static int	is_correct_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_order(t_list *l)
{
	int	i;

	i = 0;
	while (i < l->len - 1)
	{
		if (l->sa[i] > l->sa[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	check_arg(int argc, char **argv, t_list *l)
{
	if (!is_correct_input(argv))
		ft_werror();
	if (!is_duplicate(argc, argv, l))
		ft_werror();
	if (!is_order(l) && argc > 5)
		return (0);
	return (1);
}
