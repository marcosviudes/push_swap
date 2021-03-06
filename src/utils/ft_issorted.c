/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:35:16 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 12:39:06 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <limits.h>

int	ft_ptoint(int *p)
{
	long int	n;

	n = *p;
	return (n);
}

int	ft_issorted(t_list *lst)
{
	int		number;
	int		last_num;

	last_num = INT_MIN;
	while (lst != NULL)
	{
		number = *(int *)lst->content;
		if (number <= last_num)
			return (0);
		last_num = number;
		lst = lst->next;
	}
	return (1);
}

int	ft_isreversed(t_list *lst)
{
	int		number;
	int		last_num;

	last_num = INT_MAX;
	while (lst != NULL)
	{
		number = ft_ptoint(lst->content);
		if (number >= last_num)
			return (0);
		last_num = number;
		lst = lst->next;
	}
	return (1);
}
