/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:14:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/11 12:56:15 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorrb(t_list **b)
{
	if(b == NULL || *b == NULL)
		return(0);
	ft_lstrevrot(b);
	ft_putendl_fd(STR_RB, 1);
	return(KEY_RRB);
}