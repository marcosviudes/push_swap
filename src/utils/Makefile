NAME	= libstack.a

SRCS	= 	ft_lstpush.c\
			ft_swap.c\
			ft_lstpop.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc 
CFLAGS	= -g #-Wall -Werror -Wextra -g3


${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
all:		${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all bonus clean fclean re