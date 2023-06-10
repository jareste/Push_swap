/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:13:15 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/09 01:50:04 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	f_aux(int *a, int *b, int len, int aux)
{
	if (a[0] > a[1] && a[1] > a[3] && a[2] > a[3] && a[3] < a[4])
	{
		rrr(a, b, len, 'a');
		rrr(a, b, len, 'a');
		pb(a, b, len);
		aux++;
	}
	else if(a[0] > a[4] && a[1] > a[4] && a[2] > a[4] && a[3] > a[4])
	{
		rrr(a, b, len, 'a');
		pb(a, b, len);
		aux++;
	}
	return(aux);
}

int	array5(int *a, int *b, int len)
{
	int	aux;

	aux = 0;
	if(a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4])
	{
		pb(a, b, len);
		aux++;
	}
	else if(a[0] > a[1] && a[1] < a[2] && a[1] < a[3] && a[1] < a[4])
	{
		sa(a);
		pb(a, b, len);
		aux++;
	}
	else if(a[0] > a[2] && a[1] > a[2] && a[2] < a[3] && a[2] < a[4])
	{
		rr(a, b, len,'a');
		sa(a);
		pb(a, b, len);
		aux++;
	}
	else if (aux == 0)
		aux = f_aux(a, b, len, aux);
	array4(a, b, 4);
	if(aux == 1)
	{
		pa(a, b, len);
		if (a[0] > a[1])
			sa(a);
	}
}
