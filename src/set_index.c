/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:22:10 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 02:07:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	set_index(t_list *l)
{
	int	i;
	int	j;
	int	new_index;

	i = -1;
	while (i++ < l->len)
		l->saux[i] = l->sa[i];
	i = 0;
	while (i < l->len)
	{
		new_index = 1;
		j = 0;
		while (j < l->len)
		{
			if (i != j && l->saux[i] > l->saux[j])
				new_index++;
			j++;
		}
		l->sa[i] = new_index;
		i++;
	}
}
