/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 07:50:19 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*create_a(char **argv, int len)
{
	int	*a;
	int	i;
	int	tmp;

	a = malloc(sizeof(int) * len);
	if (!a)
		return (0);
	i = 0;
	while (len > 0)
	{
		if (argv[i + 1][0] == '0' && argv[i + 1][1] == '\0')
			a[i] = 0;
		else
		{
			tmp = ft_atoi(argv[i + 1], a);
//			if (tmp > 2147483647 || tmp < -2147483648)
//				return (NULL);
			a[i] = tmp;
	//			a[i] = ft_atoi(argv[i + 1]); antes hacia esto pero esto no gestiona errores de atoi
		}
		i++;
		len--;
	}
	return (a);
}

void	push_swap(int *a, int *b, int len)
{
	if (len <= 3)
		array3(a, b, len);
	if (len == 4)
		array4(a, b, len);
	if (len == 5)
		array5(a, b, len);
	if (len > 5)
		set_index(a, len);
	if (len > 5 && len <= 20)
		array20(a, b, len);
	if (len > 20)
		array100(a, b, len);
}

void	ft_free(int	*a)
{
	free(a);
	write(2, "Error\n", 6);
	exit(0);
}

int	main(int argc, char **argv)
{
	int	len = 0;
	int	*a;
	int	*b;
	
	if (!is_correct_input(argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc > 1)
		while (argv[++len + 1]);
	else if (argc < 2)
		return (0);
	a = create_a(argv, len);
	if (!a)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if(!is_duplicate(a, len) && argc > 1)
		ft_free(a);
	b = malloc(sizeof(int) * len);
	if (!b)
		ft_free(a);
	push_swap(a, b, len);
	
/*	
	len = -1;
	while (len++ < 20)
		printf("%i\n", a[len]);
	

*/	free(a);
	free(b);
	return (0);
}
