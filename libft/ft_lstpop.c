#include "libft.h"

void	*ft_lstpop(t_list **list)
{
	t_list	*head;
	void	*ret;

	if (*list == NULL)
		return (NULL);
	head = *list;
	ret = head->content;
	(*list) = (*list)->next;
	free(head);
	return (ret);
}
