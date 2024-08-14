/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:13:15 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:25:44 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	f_aux(int *a, t_list *l, int aux)
{
	if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3] && a[2] < a[4] && aux == 0)
	{
		rr(l, 'a');
		sa(l->sa);
		pb(l);
		aux++;
	}
	else if ((a[0] > a[1] || a[0] < a[1]) && a[1] > a[3] \
			&& a[2] > a[3] && a[3] < a[4] && aux == 0)
	{
		rrr(l, 'a');
		rrr(l, 'a');
		pb(l);
		aux++;
	}
	else if (a[0] > a[4] && a[1] > a[4] \
		&& a[2] > a[4] && a[3] > a[4] && aux == 0)
	{
		rrr(l, 'a');
		pb(l);
		aux++;
	}
	return (aux);
}

void	array5(int *a, t_list *l)
{
	int	aux;

	aux = 0;
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4] && aux == 0)
	{
		pb(l);
		aux++;
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3] \
		&& a[1] < a[4] && aux == 0)
	{
		sa(l->sa);
		pb(l);
		aux++;
	}
	aux = f_aux(l->sa, l, aux);
	array4(l->sa, l);
	if (aux == 1)
	{
		pa(l);
		if (a[0] > a[1])
			sa(l->sa);
	}
}
