#include "stacklib.h"


int		ft_lstfswap(t_list **list)
{
{
	t_list	*temp;

	if (*list && (*list)->next)
	{
		temp = (*list)->next;
		(*list)->next = temp->next;
		temp->next = *list;
		*list = temp;
	}
}
	return(0);
}
int		ft_lstswap(t_list *a, t_list *b)
{
	t_list *temp;

	if(a == NULL || a->next == NULL)
		return(0);
	temp = a;
	a = b;
	b = temp;
	return(1);
}
void ft_lstnswap(t_list *lst, int first, int second)
{
    t_list *temp;
	t_list *temp2;

	void	*p;
	int		i;

	i = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		i++;
	}
}