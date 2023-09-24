/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_chunks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:13:59 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/24 21:26:43 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	split_chunks(t_list *l, int num)
{
	int	cut_num;
	int	i;
	int	aux;

	i = 0;
	cut_num = l->len / num + (l->len % num);
	aux = cut_num;
	while (num-- > 0)
	{
		while (i < cut_num && l->lena > 0)
		{
			if (l->sa[0] <= cut_num)
			{
				pb(l);
				if (l->sb[0] <= cut_num - (aux / 2) && l->lenb > 1)
					rr(l, 'b');
				i++;
			}
			else
				rr(l, 'a');
		}
		cut_num += aux;
	}
}

static int	aux_rr(t_list *l, int aux_exit, int i)
{
	while (i > 0 && aux_exit == 0)
	{
		if (l->sb[0] == l->lenb - 1 && l->memsolv == 0)
		{
			pa(l);
			i--;
			l->memsolv = 1;
			if (l->sb[0] == l->lenb + 1)
				aux_exit = 1;
		}
		if (aux_exit == 0)
			rr(l, 'b');
		i--;
	}
	return (aux_exit);
}

static int	aux_rrr(t_list *l, int aux_exit, int i)
{
	i = l->lenb - i;
	while (i > 0 && aux_exit == 0)
	{
		if (l->sb[0] == l->lenb - 1 && l->memsolv == 0)
		{
			pa(l);
			i--;
			l->memsolv = 1;
			rrr(l, 'b');
			if (l->sb[0] == l->lenb + 1)
				aux_exit = 1;
		}
		if (aux_exit == 0)
			rrr(l, 'b');
		i--;
	}
	return (aux_exit);
}

void	solve(t_list *l)
{
	int	i;
	int	aux;
	int	aux_exit;

	aux = l->len;
	aux_exit = 0;
	l->memsolv = 0;
	while (l->lenb > 0)
	{
		i = 0;
		while (l->sb[i] != l->lenb && i < l->lenb)
				i++;
		if (i <= (l->lenb / 2))
			aux_exit = aux_rr(l, aux_exit, i);
		else if (i > (l->lenb / 2))
			aux_exit = aux_rrr(l, aux_exit, i);
		pa(l);
		if (l->memsolv == 1)
		{
			if (l->sa[0] - 1 == l->sa[1])
				sa(l->sa);
			l->memsolv = 0;
			aux_exit = 0;
		}
	}
}
