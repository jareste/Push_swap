/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:03:07 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 13:57:22 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *sa)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	tmp;

	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *sa, int *sb)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "ss\n", 3);
}
/*
int main(void)
{
	int	a[3] = {1, 2, 3};

	printf("a before:%i %i\n", a[0], a[1]);
	sa(a);
	printf("a:  %i %i\n\n", a[0], a[1]);

   int     b[3] = {11, 21, 31};

        printf("b before:%i %i\n", b[0], b[1]);
        sb(b);
        printf("b:  %i %i\n\n", b[0], b[1]);

	   int     a1[3] = {1, 2, 3};
	   int	b1[3] = {11, 21, 31};

        printf("a before:%i %i %i %i\n", a1[0], a1[1], b1[0], b1[1]);
        ss(a1, b1);
        printf("a:  %i %i %i %i\n", a1[0], a1[1], b1[0], b1[1]);

	size_t len = sizeof(b1);
	size_t aux = sizeof(b1[0]);

	printf("longitud:%zu\n", len/aux);
}*/
