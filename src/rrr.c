/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:48:44 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:24:45 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_list *l)
{
	int	i;

	i = l->lena - 1;
	while (i > 0)
	{
		swap(&l->sa[i], &l->sa[i - 1]);
		i--;
	}
}

void	rrb(t_list *l)
{
	int	i;

	i = l -> lenb - 1;
	while (i > 0)
	{
		swap(&l->sb[i], &l->sb[i - 1]);
		i--;
	}
}

void	rrr(t_list *l, char r_a_b)
{
	if (r_a_b == 'a')
	{
		rra(l);
		write(1, "rra\n", 4);
	}
	else if (r_a_b == 'b')
	{
		rrb(l);
		write(1, "rrb\n", 4);
	}
	else if (r_a_b == 'r')
	{
		rra(l);
		rrb(l);
		write(1, "rrr\n", 4);
	}
}
