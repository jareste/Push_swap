/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 01:15:13 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 01:04:35 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	array4(int *a, int *b, int len)
{
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3])
		pb(a, b, len);
	else if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3])
	{
		sa(a);
		pb(a, b, len);
	}
	else if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3])
	{
		rr(a, b, len, 'a');
		sa(a);
		pb(a, b, len);
	}
	else if (a[0] > a[3] && a[1] > a[3] && a[2] > a[3])
	{
		rrr(a, b, len, 'a');
		pb(a, b, len);
	}
	array3(a, b, 3);
	pa(a, b, len);
}
