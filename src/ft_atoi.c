/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:57:23 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 02:06:14 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_atoi(const char *str, t_list *l)
{
	int				i;
	int				neg;
	long long int	result;

	i = 0;
	result = 0;
	neg = 0;
	l->atoierror = 0;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
		if (result > ((long long int)2147483647 + 1) && neg == 1)
			l->atoierror = 1;
		if ((result > 2147483647 && neg == 0))
			l->atoierror = 1;
	}
	if (neg == 1)
		return (-result);
	return (result);
}
