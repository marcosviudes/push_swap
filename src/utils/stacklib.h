#ifndef STACKLIB_H
# define STACKLIB_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../libft/libft.h"

/*
*typedef struct		s_list
*{
*    void*             content;
*   	struct s_list	*next;
*}					t_list;
*/

int		ft_lstswap(t_list *lst_a, t_list *lst_b);
void	ft_lstnswap(t_list *node, int pos1, int pos2);
int		ft_lstpush(t_list **to_list, t_list **list);
void	*ft_lstpop(t_list **list);
int		ft_lstfswap(t_list **list);
void	ft_lstdelfirst(t_list **list);
void	ft_lstrot(t_list **list);
int    	ft_lstrevrot(t_list **list);
void    ft_lstdellast(t_list **list);
int     ft_isnum(char *string);
#endif