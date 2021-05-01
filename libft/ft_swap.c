#include "libft.h"

void ft_swap(int* src, int* dest)
{
	int temp = *src;
	*src = *dest;
	*dest = temp;
}

int		ft_lstfswap(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)->next)
	{
		temp = (*list)->next;
		(*list)->next = temp->next;
		temp->next = *list;
		*list = temp;
		return(1);
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

	int		i;
	first = 0;
	first++;
	second = 0;
	second++;
	i = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		i++;
	}
}