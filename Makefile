# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 04:03:39 by jareste-          #+#    #+#              #
#    Updated: 2023/06/17 04:05:45 by jareste-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_PATH = ./src
INC_PATH = ./inc

SRCS = $(addprefix $(SRC_PATH)/, array3.c \
	   array4.c \
	   array5.c \
	   ft_atoi.c \
       pa.c \
       pb.c \
       push_swap.c \
       rr.c \
       rrr.c \
       ss.c \
	   set_index.c \
	   errors.c \
	   split_chunks.c \
	   ft_werror.c)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror 

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@ 

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS} 
	${CC} ${SRCS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean: 
			${RM} ${OBJS} ${NAME}

re: fclean all

.PHONY: all clean fclean re
