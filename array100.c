/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:08:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 07:50:42 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void	split_chunks(int *a, int *b, int len)
{
	int	split_value;
	int	i;
	int	j;
	int	aux_len;
	int	chunk;

	aux_len = len;
	split_value = len / 4 + len % 4;
	i = 0;
	chunk = 1;
	while (chunk <= 4)
	{
		j = (split_value * (chunk - 1));
		while (i < aux_len && j < split_value * chunk)
		{
			if (a[0] <= split_value * chunk)
			{
				pb(a, b, len);
				aux_len--;
				j++;
			}
			else
				rr(a, b, aux_len, 'a');
			i++;
		}
		chunk++;
	}
	while (aux_len-- > 0)
		pb(a, b, len);
}*/

static void split_chunks(int *a, int *b, int len) {
    int split_value = len / 4 + len % 4;
    int i = 0;
    int j = 0;
    int chunk = 0;

    while (chunk < 4) {
        j = split_value * (chunk + 1);
        i = 0;
		while (i < len && j < ((split_value * (chunk + 1))-1))
	   	{
            if (/*a[i] >= split_value * (chunk - 1) &&*/ a[i] < split_value * chunk)
		   	{
                pb(a, b, len/* - i*/);
                i++;
                j++;
            }
		   	else 
			{
                rr(a, b, len, 'a');
                i++;
            }
        }
        chunk++;
    }

    while (i < len) {
        pb(a, b, len/* - i*/);
        i++;
        j++;
    }
}




/*
static void	solve(int *a, int *b, int len)
{
	int	i;
	int	j;
	int	len_b;
	int	aux[2];

i = -1;
	while (i++ < 100)
		printf("%i\n", b[i]);
		printf("\n\n\n");

	printf("\n\n\n\n he entrado al solve\n\n\n");
	aux[0] = 0;
	aux[1] = 0;
	len_b = len;
	while (len_b > 0)
	{
		i = 0;
		j = 0;
		while (b[i] != len_b - 1)
		{
			i++;
			if (b[0] == len_b - 2)
				{
					aux[0] = 1;
	//				i--;
				}

		}
		while (b[len_b - j] != len_b - 1)
		{
			j++;

			if (b[len_b] == len_b - 2)
					aux[1] = 1;

		}
		if (i - aux[0] <= j - aux[1] && i != 0)
			while (i-- > 0)
			{
				if (b[0] == len_b - 2)
				{
					pa(a, b, len);
					i--;
				}

				rr(a, b, len_b - aux[0], 'b');
			}
		else if (j - aux[1] < i - aux[0])
			while (j-- > 0)
			{
				if (b[len_b] == len_b - 2)
				{
					pa(a, b, len);
					j--;
				}

				rrr(a, b, len_b - aux[1], 'b');
			}
		pa(a, b, len);
		if (aux[0] == 1 || aux[1] == 1)
		{
			sa(a);
			len_b--;
			aux[0] = 0;
			aux[1] = 0;
		}
		len_b--;
	}
}
*/




/*static void	solve(int *a, int *b, int len)
{
	int	i;
	int	j;
	int	len_b;

	len_b = len;
	while (len_b > 0)
	{
		i = 0;
		j = 0;
		while (b[i] != len_b - 1)
			i++;
		while (b[len_b - j] != len_b - 1)
			j++;
		if (i <= j && i != 0)
			while (i-- > 0)
				rr(a, b, len_b, 'b');
		else if (j < i)
			while (j-- > 0)
				rrr(a, b, len_b, 'b');
		pa(a, b, len);
		len_b--;
	}
}*/


static void solve(int *a, int *b, int len) {
    int len_b = len;

    while (len_b > 0)
   	{
        int i = 0;
        while (b[i] != len_b - 1)
			i++;

        if (i != 0)
	   	{
            if (i <= len_b / 2) {
                while (i > 0) {
                    rr(a, b, len_b, 'b');
                    i--;
                }
            }
		   	else
		   	{
                int count = len_b - i;
                while (count > 0)
			   	{
                    rrr(a, b, len_b, 'b');
                    count--;
                }
            }
        }

        pa(a, b, len);
        len_b--;
   	 }
}



void	array100(int *a, int *b, int len)
{
	split_chunks(a, b, len);
	solve(a, b, len);
}
/*
#include <time.h>
int main(void)
{
    int a[100] = {-291191200, -1516456973, 624309906, 1188783556, 2049817249, -1619734944, -639609210, -1550893875, 870150304, -1771371636, 881030104, 1766945779, -1408515190, 256374342, 665849877, 787009655, -443509752, -1219770169, -2068543713, 2055127011, -1706939535, -442656758, 1489076214, -1912073269, -216978466, 738614040, -1409594034, 559281602, 284114229, -115588805, 1966713816, -732326984, 1361372657, 986143850, 1556039920, 1417282506, -225263878, -141989813, 629593671, -171959178, 546948158, -2123506989, 1740487498, 126430021, 1576640439, 1169137188, -2022432677, -351343004, -609970619, -121291211, -849242765, -1970576748, 1385421261, -1697289546, 1222552644, 457105854, 1782572650, -677547007, 1656645303, -321784945, -347088352, -1280908343, -2125149173, 1337708193, -1037022875, 589099858, 2074375910, 1884320242, 1906798603, -500397816, 65983744, -160920492, -639815831, 558201096, 1298142790, 47504282, -1850730523, -1450278191, -670115695, 2075372877, -1865301260, 1050467821, -1543744177, -1200051158, -1819422345, -1039193177, -1591638761, 1848703957, 1144091092, 987934598, 662030249, 1429216046, -25308819, -1662959327, 1848073898, 1143736959, -938764140, 503915646, 1967574945, -2125851414};
    int i;

    // Semilla aleatoria basada en el tiempo actual
//    srand(time(NULL));

    // Generación de números aleatorios en el rango de -500 a 500
  //  for (i = 0; i < 100; i++) {
    //    a[i] = rand() % 1001 - 500;
   // }
	int *b;

	b = malloc(sizeof(int) * 100);
	set_index(a, 100);
	array100(a, b, 100);

	i = -1;
	  while (i++ < 100)
		printf("a:%i\n", a[i]);

return (0);

}*/
