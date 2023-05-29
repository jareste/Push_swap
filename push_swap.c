/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/29 14:33:58 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	create_a(char **argv, int len)
{
	int	*a;

	while (argv[++len + 1]); 
	a = malloc(sizeof(int) * len);
	
	return (len);
}
*/
int	main(int argc, char **argv)
{
	int	len;

	if (argc > 1)
		while (argv[++len + 1]);
	printf("%i\n", len);
	return (0);
}
