#####################################
### CONFIG
#####################################
.DELETE_ON_ERROR:

CHECKER		= checker
SWAP		= push_swap
TEST		= test
STACKLIB	= ./src/utils/libstack.a

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

CHECKER_SRC	=	main.c\
				get_next_line.c
SWAP_SRC	=	main.c
TEST_SRC	=	$(SRC_DIR)/test/main.c

CHECKER_F 	= $(addprefix $(CHECKER_DIR), $(CHECKER_SRC))
SWAP_F		= $(addprefix $(SWAP_DIR), $(SWAP_SRC))

CHECKER_O	= $(CHECKER_F:%.c=%.o)
SWAP_O		= $(SWAP_F:%.c=%.o)
OBJS 		= $(CHECKER_O) $(SWAP_O)
INCLUDES 	= $(LIBFT) $(STACKLIB)

#####################################
### RULES
#####################################

all: $(SWAP) $(CHECKER)

$(STACKLIB):
	@make -C src/utils
$(LIBFT):
	@make -C libft bonus
$(CHECKER): $(CHECKER_O) $(LIBFT) $(STACKLIB)
	$(CC) $(CFLAGS) $(INCLUDES) $(CHECKER_O) -o $(CHECKER)

$(SWAP): $(SWAP_O) $(LIBFT) $(STACKLIB) 
	$(CC) $(CFLAGS) $(INCLUDES) $(SWAP_O) -o $(SWAP)

$(TEST): $(STACKLIB) $(LIBFT)
	$(CC) $(DFLAGS) $(TEST_SRC) $(INCLUDES) $(STACKLIB) $(LIBFT) -o $(TEST)
normi: fclean
	norminette src/*
	norminette incldues/*
	norminette libft/*.c libft/*.h

clean:
	make -C $(LIBFT_DIR) clean
	make -C src/utils clean
	$(RM) $(NAME) $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@make -C src/utils fclean
	$(RM) $(CHECKER) $(SWAP) $(TEST)
re: fclean all
retest:
	$(RM) test
	@make -C src/utils re
	make test

debug: fclean

.PHONY:	all clean fclean re debug