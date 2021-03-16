#include "stacklib.h"

int	ft_lstrevrot(t_list **list)
{
	t_list *temp;
	t_list	*last;

	if(list != NULL || *list != NULL)
	{
		last = ft_lstlast(*list);
		temp = ft_lstnew(last->content);
		ft_lstadd_front(list, temp);
		ft_lstdellast(list);
		return(1);
	}
	return(0);
}