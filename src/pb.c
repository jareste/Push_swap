/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 02:41:02 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:24:10 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pb(t_list *l)
{
	int	i;

	i = l->lenb;
	l->lenb = l->lenb + 1;
	l->lena = l->lena - 1;
	while (i > 0)
	{
		swap(&l->sb[i], &l->sb[i - 1]);
		i--;
	}
	l->sb[0] = l->sa[0];
	i = 0;
	while (i <= l->lena - 1)
	{
		l->sa[i] = l->sa[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
