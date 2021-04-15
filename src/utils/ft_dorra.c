/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:11:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/15 20:37:29 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorra(t_list **a)
{
	if(a == NULL || *a == NULL)
		return(0);
	ft_lstrevrot(a);
	ft_putendl_fd(STR_RRA, 1);
	return(KEY_RRA);
}