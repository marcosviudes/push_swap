#include "libft.h"

int	ft_lstrevrot (t_list **list)
{
	t_list	*last;
	t_list	*temp;

	last = NULL;
	temp = NULL;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return (0);
	last = *list;
	temp = last->next;
	while (temp->next)
	{
		last = last->next;
		temp = temp->next;
	}
	last->next = NULL;
	temp->next = *list;
	*list = temp;
	return (1);
}
