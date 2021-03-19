NAME	= libstack.a

SRCS	= 	ft_lstpush.c\
			ft_swap.c\
			ft_lstpop.c\
			ft_lstrot.c\
			ft_lstrevrot.c\
			ft_lstdellast.c\
			ft_dopa.c\
			ft_dopb.c\
			ft_dora.c\
			ft_dorb.c\
			ft_dorr.c\
			ft_dorra.c\
			ft_dorrb.c\
			ft_dorrr.c\
			ft_dosa.c\
			ft_dosb.c\
			ft_doss.c
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