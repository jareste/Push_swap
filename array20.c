/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:26:24 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 07:01:08 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	split_chunks(int *a, int *b, int len)
{
	int	split_value;
	int	i;
	int	j;
	int	aux_len;

/*	i = -1;
	while (i++ < 14)
		printf("split a:%i\n", a[i]);
		printf("\n\n\n");

*/	aux_len = len;
	split_value = len / 2;
	i = 0;
	j = 0;
	while (i < aux_len && j < split_value)
	{
		if (a[0] < split_value)
		{
			pb(a, b, aux_len);
			len--;
			j++;
		}
		else
			rr(a, b, len, 'a');
		i++;
	}
	while (len-- > 0)
		pb(a, b, aux_len);
}

static void	solve(int *a, int *b, int len)
{
	int	i;
	int	j;
	int	len_b;
	int	aux;

/*i = -1;
	while (i++ < 14)
		printf("solve b:%i\n", b[i]);
		printf("\n\n\n");
*/

	len_b = len;
	aux = 0;
	while (len_b > 0)
	{
		i = 0;
		j = 0;
		while (b[i] != len_b - 1)
		{
			i++;
/*			if (b[0] == len_b - 2)
				{
		//			printf("he entrado en la i\n\n");
					pa(a, b, len);
					aux = 1;
					i--;
				}
*/		
		}
		while (b[len_b - j] != len_b - 1)
		{	
			j++;
		
/*			if (b[len_b] == len_b - 2)
				{
		//			printf("he entrado en la j\n\n");
					pa(a, b, len);
					aux = 1;
					j--;
				}

*/		}
		if (i <= j && i != 0)
			while (i-- > 0)
			{
/*				if (b[0] == len_b - 2)
				{
					printf("\nsoy len_b: %i\n", len_b);
					pa(a, b, len);
					aux = 1;
					i--;
				}
*/
				rr(a, b, len_b - aux, 'b');
			}
		else if (j < i)
			while (j-- > 0)
			{
			/*	if (b[len_b] == len_b - 2)
				{
					pa(a, b, len);
					aux = 1;
					j--;
				}
*/
				rrr(a, b, len_b - aux, 'b');
			}
		pa(a, b, len);
		if (aux == 1)
		{
			sa(a);
			len_b--;
			aux = 0;
		}
		len_b--;
	}
}

void	array20(int *a, int *b, int len)
{
	split_chunks(a, b, len);
	solve(a, b, len);
}
/*
int main(void)
{
//	int a[10] = {21, 1, 31, 61, 91, 41, 51, 71, 11, 81};
	int *b;
	b = malloc(sizeof(int) * 14);
	int i = -1;
	int a[14] = {14, 12, 7, 6, 4, 1, 2, 5, 11, 9, 3, 8 , 13, 10};

//	int *sa;
	set_index(a, b, 14);
	i = -1;
//		printf("\n\n\n");
	while (i++ < 15)
		printf(":%i\n", a[i]);
		printf("\n\n\n");
	array20(a, b, 14);
//		printf("\n\n\n");
	i = -1;
//	while (i++ < 9)
//		printf("a:%i\n", a[i]);
//		printf("\n\n\n");
   while (i++ < 15)
		printf("a:%i\n", a[i]);
	return(0);
}*/
