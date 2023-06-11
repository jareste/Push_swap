/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/11 07:38:00 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_atoi(const char *str, int *a);
void	ss(int *sa, int *sb);
void	sb(int *sb);
void	sa(int *sa);
void	pa(int *a, int *b, int len);
void	pb(int *a, int *b, int len);
void	rr(int *a, int *b, int len, char r_a_b);
void	rrr(int *a, int *b, int len, char r_a_b);
void	array3(int *a, int *b, int len);
void	array4(int *a, int *b, int len);
void	array5(int *a, int *b, int len);
void	array20(int *a, int *b, int len);
void	array100(int *a, int *b, int len);
void	swap(int *a1, int *a2);
void	set_index(int *a, int len);
int		is_duplicate(int *a, int len);
int		is_correct_input(char **argv);
void	ft_free(int *a);

#endif
