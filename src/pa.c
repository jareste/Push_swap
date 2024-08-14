/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:52:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:24:03 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(int *a1, int *a2)
{
	int	tmp;

	tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void	pa(t_list *l)
{
	int	i;

	i = l->lena;
	l->lena = l->lena + 1;
	l->lenb = l->lenb - 1;
	while (i > 0)
	{
		swap(&l->sa[i], &l->sa[i - 1]);
		i--;
	}
	l->sa[0] = l->sb[0];
	i = 0;
	while (i <= l->lenb)
	{
		l->sb[i] = l->sb[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}
