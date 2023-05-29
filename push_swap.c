/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 22:04:01 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*create_a(char **argv, int len)
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * len);
	if (!a)
		return (0);
	i = 0;
	while (len > 0)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
		len--;
	}
	return (a);
}

void	push_swap(int *a, int *b, int len)
{

}


int	main(int argc, char **argv)
{
	int	len;
	int	*a;
	int	*b;

	if (argc > 1)
		while (argv[++len + 1]);
	a = create_a(argv, len);
	b = malloc(sizeof(int) * len);
	push_swap(a, b, len)
	
	
	len = -1;
	while (len++ < 4)
		printf("%i\n", a[len]);
	

	free(a);
	free(b);
	return (0);
}
