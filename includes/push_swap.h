#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <libft.h>
#include "utils.h"
# include "get_next_line.h"


typedef struct	s_data{
	int			count;
	int			avg;
	int			min;
	int			max;
}				t_data;

typedef struct	s_all{
	t_list	*a;
	t_list	*b;
	t_data	adata;
	t_data	bdata;
	int		i;
	int		*instruction;

}				t_all;
#endif
