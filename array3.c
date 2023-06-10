/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:43:01 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/30 01:14:48 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	array3(int *a, int *b, int len)
{
	if (len == 2)
	{
		if (a[0] > a[1])
			sa(a);
	}
	else if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		rrr(a, b, len, 'a');
		sa(a);
	}
	else if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		sa(a);
	else if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
	{
		if (!rrr(a, b, len, 'a'))
			return (0);
	}
	else if (a[1] < a[2] && a[0] > a[1] && a[0] > a[2])
	{
		if (!rr(a, b, len, 'a'))
			return (0);
	}
	else if (a[1] > a[2] && a[0] > a[1] && a[0] > a[2])
	{
		if (!rr(a, b, len, 'a'))
			return (0);
		sa(a);
	}
	return (1);
}
