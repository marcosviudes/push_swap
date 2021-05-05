/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:42:41 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 16:31:03 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//t_list		*ft_lstnew(void const *content)
t_list		*ft_lstnew(int content)
{
	t_list	*new;
	int		*temp;

	if (!(new = calloc(sizeof(t_list), 1)))
		return (NULL);
	//new->content = (void *)content;
	temp = malloc(sizeof(int));
	(*temp) = content;
	new->content = temp;
	//new->pos = 0;
	new->next = NULL;
	return (new);
}
