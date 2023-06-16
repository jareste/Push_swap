/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/17 01:16:51 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int	*sa;
	int	*sb;
	int	*saux;
	int	len;
	int	lena;
	int	lenb;
	int	atoierror;
	int	memsolv;
}	t_list;

int		ft_atoi(const char *str, t_list *l);
void	ss(int *sa, int *sb);
void	sb(int *sb);
void	sa(int *sa);
void	pa(t_list *l);
void	pb(t_list *l);
void	rr(t_list *l, char r_a_b);
void	rrr(t_list *l, char r_a_b);
void	array3(int *a, t_list *l);
void	array4(int *a, t_list *l);
void	array5(int *a, t_list *l);
void	swap(int *a1, int *a2);
void	set_index(t_list *l);
int		check_arg(int argc, char **argv, t_list *l);
void	ft_freest(t_list *l);
void	ft_werror(void);
void	split_chunks(t_list *l, int n);
void	solve(t_list *l);

#endif
