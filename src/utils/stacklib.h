#ifndef STACKLIB_H
# define STACKLIB_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include "../../libft/libft.h"

/*
*typedef struct		s_list
*{
*    void*             content;
*   	struct s_list	*next;
*}					t_list;
*/

void ft_swap(int* a, int* b);
void	stack_sa(t_list *a);
#endif