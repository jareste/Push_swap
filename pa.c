/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:52:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 13:49:43 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(int *a, int *b, int len)
{
	int	tmp;
	int	*aux;

	aux = malloc(sizeof(int) * len);
	if (!aux)
		return (0);
	tmp = 0;
	while (len > 0)
	{
		aux[tmp + 1] = a[tmp];
		tmp++;
		len--;
	}
	a[0] = b[0];
	while (tmp > 0)
	{
		a[tmp] = aux[tmp];
		tmp--;
	}
	free(aux);
	aux = NULL;
	write(1, "pa\n", 3);
	return (1);
}
/*
int main(void)
{
   int     a1[3] = {1, 2, 3};
   int  b1[3] = {11, 21, 31};

   int tmp = -1;
   pa(a1, b1, 3);
	while (tmp++ < 5)
		printf("%i  ", a1[tmp]);
	return (0);
}*/
