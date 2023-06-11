/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 01:55:03 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/10 22:10:18 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	swap(int *a1, int *a2)
{
	int	tmp;

	tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}
*//*
int	*sort(int *a, int len)
{
	int	i;
	int	j;
	int	*sa;

	sa = malloc(sizeof(int) * len);
	if (!sa)
		return(0);
	i = 0;
	while (i < len)
	{
		sa[i] = a[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (sa[j] > sa[j + 1])
				swap(sa[j], sa[j + 1]);
			j++;
		}
	}
	i++;
	return (sa);
}

int main(void)
{
	int b[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	printf(":%i\n", b[0]);
	
	int *sa;
	sa = sort(b, 10);
	printf(":%i\n", sa[0]);
	return(0);


}*/
