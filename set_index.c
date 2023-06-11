/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:22:10 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 06:59:52 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	set_index(int *a, int len)
{
	int	i;
	int	j;
	int	new_index;
	int	*aux;


	i = 0;
	aux = malloc(sizeof(int) * len);
	while (i < len)
	{
		aux[i] = a[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		new_index = 0;
		j = -1;
		while (j < len)
		{
			if (i != j && aux[i] <= aux[j])
				new_index++;
			j++;
		}
		a[i] = new_index;
		i++;
	}
	free(aux);
}*/

void set_index(int *a, int len)
{
    if (len <= 0) {
        return;
    }

    int *indices = malloc(sizeof(int) * len);

    int i = 0;
    while (i < len) {
        indices[i] = i;
        i++;
    }

    i = 0;
    while (i < len) {
        int min_index = i;
        int j = i + 1;

        while (j < len) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
            j++;
        }

        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;

        temp = indices[i];
        indices[i] = indices[min_index];
        indices[min_index] = temp;

        i++;
    }

    i = 0;
    while (i < len) {
        a[i] = indices[i];
        i++;
    }

    free(indices);
}
/*


#include <time.h>
int main(void)
{
	int a[100] = {-286, 192, 138, 433, -461, 38, -19, -487, 462, -320, 99, 211, -455, -372, -80, 287, 249, -26, -187, 419, 393, -228, 432, -337, -129, 327, 334, -223, -29, -312, -461, 478, -403, -75, -411, 299, 263, -308, 463, -377, 462, -392, -383, -457, 305, 390, -388, -439, 314, -409, 320, -337, 452, -38, -437, 282, -58, -486, -42, -494, -202, 236, -422, -464, -119, -27, 398, -30, 250, -360, 456, -23, -234, -171, 87, 33, -492, 98, 381, -296, -478, 290, 135, -212, -413, -62, 254, 461, -489, -321, 491, 30, 44, 181, -274, -40, 99, 47, -416, -193};	
	int i;

    // Semilla aleatoria basada en el tiempo actual
//    srand(time(NULL));

    // Generación de números aleatorios en el rango de -500 a 500
  //  for (i = 0; i < 100; i++) {
    //    a[i] = rand() % 1001 - 500;
  //  }
	
	
	
 i = -1;
	
	
	while (i++ < 100)
		printf(":%i\n", a[i]);

//	int *sa;
	set_index(a, 100);
		printf("\n\n\n");
	i = -1;
	while (i++ < 100)
		printf("%i\n", a[i]);
	return(0);



}*/
