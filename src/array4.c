/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 01:15:13 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:25:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	array4(int *a, t_list *l)
{
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && l->lena == 4)
		pb(l);
	else if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3] && l->lena == 4)
	{
		sa(l->sa);
		pb(l);
	}
	else if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3] && l->lena == 4)
	{
		rr(l, 'a');
		sa(l->sa);
		pb(l);
	}
	else if (a[0] > a[3] && a[1] > a[3] && a[2] > a[3] && l->lena == 4)
	{
		rrr(l, 'a');
		pb(l);
	}
	if (l->lena == 3)
		array3(a, l);
	pa(l);
}