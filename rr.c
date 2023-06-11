/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 03:00:53 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 01:08:37 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a, int len)
{
	int	i;

	i = 0;
	while (i + 1 < len)
	{
		swap(&a[i], &a[i + 1]);
		i++;
	}
}

void	rb(int *b, int len)
{
	int	i;

	i = 0;
	while (i + 1 < len)
	{
		swap(&b[i], &b[i + 1]);
		i++;
	}
}

void	rr(int *a, int *b, int len, char r_a_b)
{
	if (r_a_b == 'a')
	{
		ra(a, len);
		write(1, "ra\n", 3);
	}
	else if (r_a_b == 'b')
	{
		rb(b, len);
		write(1, "rb\n", 3);
	}
	else if (r_a_b == 'r')
	{
		ra(a, len);
		rb(a, len);
		write(1, "rr\n", 3);
	}
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
