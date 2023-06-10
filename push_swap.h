/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:43:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/06/09 02:02:08 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_atoi(const char *str);
void	ss(int *sa, int *sb);
void	sb(int *sb);
void	sa(int *sa);
void	pa(int *a, int *b, int len);
void	pb(int *a, int *b, int len);
int	rr(int *a, int *b, int len, char r_a_b);
int	rrr(int *a, int *b, int len, char r_a_b);
int	ft_atoi(const char *str);
int	array3(int *a, int *b, int len);
int	array4(int *a, int *b, int len);
int	array5(int *a, int *b, int len);
void	swap(int *a1, int *a2);

#endif
