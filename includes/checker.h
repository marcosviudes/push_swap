#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include "libft.h"
# include "get_next_line.h"
# include "utils.h"

#define OK		"OK"
#define KO		"KO"


typedef struct s_all{
	t_list      *a;
	t_list      *b;
	t_list		*first_a;
	t_list		*first_b;
	int			*used;
	int			init_len;
	t_list		*instrucitons;
	int			instructions_len;
	
}				t_all;

#endif