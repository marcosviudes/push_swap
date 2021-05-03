#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include "libft.h"
# include "get_next_line.h"
# include "utils.h"

#define OK		"\x1b[32mOK"
#define KO		"\x1b[31mKO"
#define ERROR	"\x1b[31mERROR"

typedef struct s_all{
	t_list      *a;
	t_list      *b;
	t_list		*first_a;
	t_list		*first_b;
	int			*used;
	int			init_len;
	int			*instrucitons;
	int			instructions_len;
	
}				t_all;

#endif