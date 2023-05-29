/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 03:00:53 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 14:05:24 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ra(int *a, int len)
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
	while (tmp < (len - 1))
	{
		a[tmp] = aux[tmp + 1];
		tmp++;
	}
	a[len - 1] = aux[0];
	free(aux);
	aux = NULL;
	return (1);
}

static int	rb(int *b, int len)
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
	while (tmp < (len - 1))
	{
		b[tmp] = aux[tmp + 1];
		tmp++;
	}
	b[len - 1] = aux[0];
	free(aux);
	aux = NULL;
	return (1);
}

int	rr(int *a, int *b, int len, char r_a_b)
{
	if (r_a_b == 'a')
	{
		if (!ra(a, len))
			return (0);
		write(1, "ra\n", 3);
	}
	else if (r_a_b == 'b')
	{
		if (!rb(b, len))
			return (0);
		write(1, "rb\n", 3);
	}
	else if (r_a_b == 'r')
	{
		if (!ra(a, len) || !rb(b, len))
			return (0);
		write(1, "rr\n", 3);
	}
	return (1);
}
/*
int main(void)
{
   int     a1[4] = {1, 2, 3, 4};
   int  b1[4] = {11, 21, 31, 41};

   int tmp = -1;
   if (!rr(a1, b1, 4, 'r'))
	   return (0);
	while (tmp++ < 3)
		printf("%i  ", a1[tmp]);
	tmp = -1;
	printf("\n");
	while (tmp++ < 3)
                  printf("%i  ", b1[tmp]);
	return (0);
}*/
