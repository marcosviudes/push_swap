#include "libft.h"

void ft_lstdellast(t_list **list)
{
    t_list *temp;
    
    temp = *list;
    if((*list) == NULL)
        return;
    if((*list)->next == NULL)
    {
        free(list);
        list = NULL;
        return;
    }
    while (temp->next && temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}