/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:52:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/11 12:56:35 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_doss(t_list **a, t_list **b)
{
	if(a == NULL || !(*a)->next || b == NULL || !(*b)->next)
		return(0);
	ft_dosa(a);
	ft_dosb(b);
		ft_putendl_fd(STR_SS, 1);
	return(KEY_SS);
}