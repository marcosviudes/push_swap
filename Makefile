#####################################
### CONFIG
#####################################
.DELETE_ON_ERROR:

CHECKER		= checker
SWAP		= push_swap
STACKLIB	= stcklib.a
LIBFT_DIR	= ./libft
LIBFT		= ./libft/libft.a

NAME		= $(CHECKER) $(SWAP)

CC 			= gcc  
CFLAGS		=#-Wall -Wextra -Werror #-Wpedantic -O3
DFLAGS		= -g #-fsanitize=address

RM			= rm -rf
MKDIR		= mkdir -p


SRC_DIR		= src
CHECKER_DIR	= $(SRC_DIR)/checker/
SWAP_DIR	= $(SRC_DIR)/push_swap/

CHECKER_SRC	=	main.c
SWAP_SRC	=	main.c

CHECKER_F 	= $(addprefix $(CHECKER_DIR), $(CHECKER_SRC))
SWAP_F		= $(addprefix $(SWAP_DIR), $(SWAP_SRC))

CHECKER_O	= $(CHECKER_F:%.c=%.o)
SWAP_O		= $(SWAP_F:%.c=%.o)
OBJS 		= $(CHECKER_O) $(SWAP_O)
INCLUDES 	= -Lft

#####################################
### RULES
#####################################

all: $(SWAP) $(CHECKER)

$(LIBFT):
	@make -C libft
$(CHECKER): $(CHECKER_O) $(LIBFT) 
	$(CC) $(CFLAGS) $(INCLUDES) $(CHECKER_O) -o $(CHECKER)

$(SWAP): $(SWAP_O) $(LIBFT) 
	$(CC) $(CFLAGS) $(INCLUDES) $(SWAP_O) -o $(SWAP)

normi: fclean
	norminette src/*
	norminette incldues/*
	norminette libft/*.c libft/*.h

clean:
	@make -C $(LIBFT_DIR) clean
	$(RM) $(NAME) $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	$(RM) $(CHECKER) $(SWAP)
re: fclean all

debug: fclean

.PHONY:	all clean fclean re debug
