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
			ft_bzero.c\
			ft_calloc.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strmapi.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strnlen.c\
			ft_isnum.c\
			ft_strcdup.c\
			ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\
			ft_lstpush.c\
			ft_swap.c\
			ft_lstpop.c\
			ft_lstrot.c\
			ft_lstrevrot.c\
			ft_lstdellast.c

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
