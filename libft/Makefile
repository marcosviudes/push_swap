# **************************************************************************** #
#																			   #
#														  :::	   ::::::::    #
#	 Makefile											:+:		 :+:	:+:    #
#													  +:+ +:+		  +:+	   #
#	 By: mviudes <mviudes@student.42.fr>			+#+  +:+	   +#+		   #
#												  +#+#+#+#+#+	+#+			   #
#	 Created: 2019/11/10 17:14:57 by mviudes		   #+#	  #+#			   #
#	 Updated: 2019/12/06 16:58:11 by mviudes		  ###	########.fr		   #
#																			   #
# **************************************************************************** #

SRCS	=	ft_atoi.c\
			ft_calloc.c\
			ft_isdigit.c\
			ft_isnum.c\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstlast.c\
			ft_lstnew.c\
			ft_lstpop.c\
			ft_lstpush.c\
			ft_lstrevrot.c\
			ft_lstrot.c\
			ft_lstsize.c\
			ft_memcpy.c\
			ft_memset.c\
			ft_putendl_fd.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_substr.c\
			ft_strnlen.c\
			ft_swap.c

OBJS	= ${SRCS:.c=.o}
CC		= gcc 
CFLAGS	= -Wall -Werror -Wextra -g3
NAME	= libft.a

${NAME}:	${OBJS} libft.h
			@ar rc ${NAME} ${OBJS}
			@echo "Libft created"
all:		${NAME}
clean:
			@rm -f ${OBJS}
			@echo "libft obj deleted"
fclean:		clean
			@rm -f ${NAME}
			@echo "$(NAME) deleted"
re:			fclean all
.PHONY:		all bonus clean fclean re
