/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:08:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 15:01:20 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorr(t_list **a, t_list **b, int	*ret_instruciton)
{
	if(!a || !(*a)->next || !b || !(*b)->next)
		return(0);
	ft_dora(a, 0);
	ft_dorb(b, 0);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_RR;
	return(1);
}