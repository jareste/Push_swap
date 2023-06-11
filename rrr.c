/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:48:44 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 01:35:45 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *a, int len)
{
	int	i;

	i = len - 1;
	while (i > 0)
	{
		swap(&a[i], &a[i - 1]);
		i--;
	}
}

void	rrb(int *b, int len)
{
	int	i;

	i = len - 1;
	while (i > 0)
	{
		swap(&b[i],& b[i - 1]);
		i--;
	}
}

void	rrr(int *a, int *b, int len, char r_a_b)
{
	if (r_a_b == 'a')
	{
		rra(a, len);
		write(1, "rra\n", 4);
	}
	else if (r_a_b == 'b')
	{
		rrb(b, len);
		write(1, "rrb\n", 4);
	}
	else if (r_a_b == 'r')
	{
		rra(a, len);
		rrb(b, len);
		write(1, "rrr\n", 4);
	}
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
