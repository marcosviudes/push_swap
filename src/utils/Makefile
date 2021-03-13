NAME	= libstack.a

SRCS	= 	stack_sa.c\
			ft_swap.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc 
CFLAGS	= -Wall -Werror -Wextra -g3


${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
all:		${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all bonus clean fclean re