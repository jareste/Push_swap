/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:57:23 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 04:16:57 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str, int *a)
{
	int	i;
	int	neg;
	long long int	result;

	i = 0;
	result = 0;
	neg = 0;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
		if (result > ((long long int)2147483647 + 1) && neg == 1)
			ft_free(a);
		if (result > 2147483647 && neg == 0)
			ft_free(a);
	}
	if (str[i] != '\0')
		ft_free(a);
	if (neg == 1)
		return (-result);
	return (result);
}
