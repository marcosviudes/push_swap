/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dosb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:50:19 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/01 14:11:27 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dosb(t_list **a, t_list **b, bool print)
{
	(void)a;
	if(!ft_lstfswap(b))
		return(0);
	if(print == true)
		ft_putendl_fd(STR_SB, 1);
	return(KEY_SB);
}