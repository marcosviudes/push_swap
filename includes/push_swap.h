#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <libft.h>
# include "utils.h"
# include "get_next_line.h"

typedef struct s_flags
{
	int			sa;
	int			sb;
	int			ss;
	int			pa;
	int			pb;
	int			ra;
	int			rb;
	int			rr;
	int			rra;
	int			rrb;
	int			rrr;
}				s_flags;

typedef struct s_min
{
	int		list_len;
	int		min;
	int		pos;
}				t_min;

typedef struct	s_data{
	t_list		*first;
	int			count;
	int			avg;
	int			min;
	int			max;
	t_min		mindata;
}				t_data;

typedef struct	s_all{
	t_list	*a;
	t_list	*b;
	t_data	*adata;
	t_data	*bdata;
	int		init_len;
	int		i;
	int		*instruction;

}				t_all;

void	solve_three(t_all *all);
#endif
