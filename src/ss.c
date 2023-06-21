/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:03:07 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:25:10 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(int *sa)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	tmp;

	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *sa, int *sb)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "ss\n", 3);
}
