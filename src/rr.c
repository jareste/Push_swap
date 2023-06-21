/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 03:00:53 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:24:38 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_list *l)
{
	int	i;

	i = 0;
	while (i + 1 < l -> lena)
	{
		swap(&l->sa[i], &l->sa[i + 1]);
		i++;
	}
}

void	rb(t_list *l)
{
	int	i;

	i = 0;
	while (i + 1 < l -> lenb)
	{
		swap(&l->sb[i], &l->sb[i + 1]);
		i++;
	}
}

void	rr(t_list *l, char r_a_b)
{
	if (r_a_b == 'a')
	{
		ra(l);
		write(1, "ra\n", 3);
	}
	else if (r_a_b == 'b')
	{
		rb(l);
		write(1, "rb\n", 3);
	}
	else if (r_a_b == 'r')
	{
		ra(l);
		rb(l);
		write(1, "rr\n", 3);
	}
}
