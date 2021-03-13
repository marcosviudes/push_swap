#ifndef STACKLIB_H
# define STACKLIB_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

#   ifndef STACK
    typedef struct		s_stack
    {
	    int             content;
    	struct s_stack	*next;
    }					t_stack;
#   endif

void ft_swap(int* a, int* b);
void	stack_sa(t_stack *a);
#endif