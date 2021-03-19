/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:52:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:57:40 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_doss(t_list **a, t_list **b, int	*ret_instruciton)
{
	if(a == NULL || !(*a)->next || b == NULL || !(*b)->next)
		return(0);
	ft_dosa(a, 0);
	ft_dosb(b, 0);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_SS;
	return(1);
}