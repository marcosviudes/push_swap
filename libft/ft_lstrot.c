#include "libft.h"

void ft_lstrot(t_list **list)
{
	t_list	*last;
	t_list	*first;

	if(!list || !*list)
		return;
	last = *list;
	first = *list;
	while(last->next != NULL)
		last = last->next;
	*list = (*list)->next;
	first->next = NULL;
	last->next = first;
	/*temp = ft_lstnew((*list)->content);
	ft_lstadd_back(list, temp);
	ft_lstdelfirst(list);*/
}

void ft_lstdelfirst(t_list **list)
{
	t_list *temp;

	if((*list) != NULL)
    {
        if ((*list)->content)
        {
			temp = *list;
            *list = (*list)->next;
            free(temp);
        }
        else
            list = &((*list)->next);
    }
}