/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 02:41:02 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/10 18:47:21 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(int *a, int *b, int len)
{
	int	i;

	i = len;
	while (i > 0)
	{
		swap(&b[i], &b[i - 1]);
		i--;
	}
	b[0] = a[0];
	i = 0;
	while (i <= len)
	{
		a[i] = a[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
/*



int	pb(int *a, int *b, int len)
{
	int	tmp;
	int	*aux;

	aux = malloc(sizeof(int) * len);
	if (!aux)
		return (0);
	tmp = 0;
	while (len > 0)
	{
		aux[tmp + 1] = b[tmp];
		tmp++;
		len--;
	}
	b[0] = a[0];
	while (tmp > 0)
	{
		b[tmp] = aux[tmp];
		tmp--;
	}
	free(aux);
	aux = NULL;
	write(1, "pb\n", 3);
	return (1);
}*/
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
