#include "libft.h"
/*
int	ft_lstrevrot(t_list **list)
{
	t_list *last2;
	t_list	*last;

	if(list != NULL || *list != NULL)
	{
		last = ft_lstlast(*list);
		last= ft_lstnew(last->content);
		ft_lstadd_front(list, temp);
		ft_lstdellast(list);
		return(1);
	}*//*
	last = *list;
	if(list != NULL || *list != NULL)
	{
		while(last->next != NULL)
		{
			last2 = last;
			last= last->next;
		}
		last2->next = NULL;
		last->next = *list;
		*list = last;
		return(1);
	}*/
int ft_lstrevrot (t_list **list)
{
	t_list *last = NULL, *temp = NULL;

	if(list == NULL || *list == NULL || (*list)->next == NULL)
		return(0);

	last = *list;
	temp = last->next;

	/*Going to the last node*/
	while(temp->next)
	{
	last = last->next;
	temp = temp->next;
	}
	last->next = NULL;
	temp->next = *list;
	*list = temp;
	return(1);
}