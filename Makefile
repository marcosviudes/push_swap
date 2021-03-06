#####################################
### CONFIG
#####################################
#.DELETE_ON_ERROR:

CHECKER		= checker
SWAP		= push_swap
TEST		= test
NAME		= $(CHECKER) $(SWAP)

LIBFT_DIR	= ./libft
LIBFT		= ./libft/libft.a


CC 			= gcc  
CFLAGS		= -Wall -Wextra -Werror -g3

RM			= rm -rf
MKDIR		= mkdir -p

SRC_DIR		= src
CHECKER_DIR	= $(SRC_DIR)/checker/
SWAP_DIR	= $(SRC_DIR)/push_swap/
UTILS_DIR	= $(SRC_DIR)/utils/

CHECKER_SRC	=	main.c\
				instructions.c\
				get_next_line.c
SWAP_SRC	=	main.c\
				sort_algorithm.c\
				sort_chunk_utils.c\
				sort_chunk.c\
				sort_three.c\
				utils.c
TEST_SRC	=	$(SRC_DIR)/test/main.c
UTILS_SRC	=	ft_dopa.c\
				ft_dopb.c\
				ft_dora.c\
				ft_dorb.c\
				ft_dorr.c\
				ft_dorra.c\
				ft_dorrb.c\
				ft_dorrr.c\
				ft_dosa.c\
				ft_dosb.c\
				ft_doss.c\
				get_args.c\
				ft_issorted.c\
				exit.c
CHECKER_F 	= $(addprefix $(CHECKER_DIR), $(CHECKER_SRC))
SWAP_F		= $(addprefix $(SWAP_DIR), $(SWAP_SRC))
UTILS_F		= $(addprefix $(UTILS_DIR), $(UTILS_SRC))

CHECKER_O	= $(CHECKER_F:%.c=%.o)
SWAP_O		= $(SWAP_F:%.c=%.o)
UTILS_O		= $(UTILS_F:%.c=%.o)
OBJS 		= $(CHECKER_O) $(SWAP_O) $(UTILS_O)

INCLUDES 	= -I ./includes -I ./libft

#####################################
### RULES
#####################################

all: $(CHECKER) $(SWAP) 

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $^
$(LIBFT):
	@make -C libft
$(CHECKER): $(LIBFT)  $(CHECKER_O) $(UTILS_O) ./includes/checker.h
	$(CC) $(CFLAGS) $(INCLUDES) $(UTILS_O) $(CHECKER_O) $(LIBFT) -o $(CHECKER)

$(SWAP): $(LIBFT) $(SWAP_O) $(UTILS_O) ./includes/push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) $(SWAP_O) $(UTILS_O) $(LIBFT) -o $(SWAP)

$(TEST): $(OBJS) $(LIBFT)
	$(CC) $(DFLAGS) $(TEST_SRC) $(INCLUDES) $(UTILS_O) $(LIBFT) -o $(TEST)

.PHONY:	all clean fclean re retest debug normi

normi: fclean
	@clear
	norminette src/*
	norminette includes/*
	norminette libft/*.c
	norminette libft/*.h

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	$(RM) $(CHECKER) $(SWAP) $(TEST)
re: fclean all
retest:
	$(RM) test
	make test
