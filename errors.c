/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:37:14 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 02:55:50 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (i != j && a[i] == a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	arg_is_number(char *argv)
{
	int i;

	if (argv[0] == '\0')
		return (0);
	i = 0;
	if ((argv[0] == '-' || argv[0] == '+') && argv[1])
		i = 1;
	while (argv[i] && (argv[i] > '0' && argv[i] < '9'))
		i++;
	if (argv[i] && (argv[i] < '0' || argv[i] > '9'))
		return (0);
	return (1);
}

int	is_correct_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(int argc, char **argv)
{
	int i;



}*/
