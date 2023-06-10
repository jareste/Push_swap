NAME = push_swap


DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

SRCS = array3.c \
       ft_atoi.c \
       pa.c \
       pb.c \
       push_swap.c \
       rr.c \
       rrr.c \
       ss.c

INCLUDE = pushswap.h


CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -MMD

%.o: %.c
			@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}
DEPS = $(addsuffix .d, $(basename $(SRCS)))
DEPS2 = $(addsuffix .d, $(basename $(BONUS_SRC)))

all:	${NAME}

-include ${DEPS}
${NAME}: ${OBJS} $(INCLUDE)
	@${CC} ${SRCS} -o ${NAME}
	@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

-include ${DEPS2}
bonus: ${BONUS_OBJS}
				@touch $@
				@${CC} ${BONUS_SRC} -o ${NAME_BONUS}
				@echo "\n$(GREEN)Created ${NAME_BONUS} ✓$(DEF_COLOR)\n"

clean:
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean: 
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@${RM} bonus
			@${RM} ${NAME} ${NAME_BONUS}
			@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
