/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:48:44 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 14:02:07 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rra(int *a, int len)
{
	int	*aux;
	int	tmp;

	aux = malloc(sizeof(int) * len);
	if (!aux)
		return (0);
	tmp = 0;
	while (tmp < len)
	{
		aux[tmp] = a[tmp];
		tmp++;
	}
	tmp = 0;
	while (tmp < len - 1)
	{
		a[tmp + 1] = aux[tmp];
		tmp++;
	}
	a[0] = aux[len - 1];
	free(aux);
	aux = NULL;
	return (1);
}

static int	rrb(int *b, int len)
{
	int	*aux;
	int	tmp;

	aux = malloc(sizeof(int) * len);
	if (!aux)
		return (0);
	tmp = 0;
	while (tmp < len)
	{
		aux[tmp] = b[tmp];
		tmp++;
	}
	tmp = 0;
	while (tmp < len - 1)
	{
		b[tmp + 1] = aux[tmp];
		tmp++;
	}
	b[0] = aux[len - 1];
	free(aux);
	aux = NULL;
	return (1);
}

int	rrr(int *a, int *b, int len, char r_a_b)
{
	if (r_a_b == 'a')
	{
		if (!rra(a, len))
			return (0);
		write(1, "rra\n", 4);
	}
	else if (r_a_b == 'b')
	{
		if (!rrb(b, len))
			return (0);
		write(1, "rrb\n", 4);
	}
	else if (r_a_b == 'r')
	{
		if (!rra(a, len) || !rrb(b, len))
			return (0);
		write(1, "rrr\n", 4);
	}
	return (1);
}
/*
int main(void)
{
   int     a1[4] = {1, 2, 3, 4};
   int  b1[4] = {11, 21, 31, 41};

   int tmp = -1;
   rrr(a1, b1, 4, 'r');
        while (tmp++ < 3)
                printf("%i  ", a1[tmp]);
        tmp = -1;
        printf("\n");
        while (tmp++ < 3)
                  printf("%i  ", b1[tmp]);
        return (0);
}*/
