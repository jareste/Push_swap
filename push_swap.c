/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/09 01:36:59 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*create_a(char **argv, int len)
{
	int	*a;
	int	i;
	int	tmp;

	printf("::%i\n", len);
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
			tmp = ft_atoi(argv[i + 1]);
			if (tmp == 0)
				return (NULL);
			a[i] = tmp;
	//			a[i] = ft_atoi(argv[i + 1]); antes hacia esto pero esto no gestiona errores de atoi
		}
		i++;
		len--;
	}
	return (a);
}

int	push_swap(int *a, int *b, int len)
{
	if (len <= 3)
		if (!array3(a, b, len))
			return (0);
	if (len == 4)
		if (!array4(a, b, len))
			return (0);
	if (len == 5)
		if (!array5(a, b, len))
			return (0);

	return (1);
}


int	main(int argc, char **argv)
{
	int	len;
	int	*a;
	int	*b;

	if (argc > 1)
		while (argv[++len + 1]);
	a = create_a(argv, len);
	if (!a)
	{
		write(1, "error\n", 6);
		return (0);
	}
	b = malloc(sizeof(int) * len);
	push_swap(a, b, len);
	
	
	len = -1;
	while (len++ < 5)
		printf("%i\n", a[len]);
	

	free(a);
	free(b);
	return (0);
}
