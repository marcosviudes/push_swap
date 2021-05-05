#include "libft.h"
/*
int		ft_lstpush(t_list **dest, t_list **src)
{
	t_list	*temp;

	if (*src != NULL){
		temp = ft_lstnew((*src)->content);
		ft_lstadd_front(dest, temp);
		ft_lstpop(src);
		return(1);
	}
	return(0);
	
	if (*src != NULL)
	{
		temp = (*src)->next;
		(*src)->next = *dest;
		*dest = *src;
		*src = temp;
		return(1);
	}
	return(0);
}*/

int	ft_lstpush(t_list **dest, t_list **src)
{
	t_list	*temp;
	t_list	*temp_2;

	if (*src != NULL)
	{
		temp_2 = *src;
		temp = (*src)->next;
		(*src)->next = *dest;
		*src = temp;
		*dest = temp_2;
		return(1);
	}
	return(0);
}