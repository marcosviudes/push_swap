/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:52:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/22 19:04:52 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_doss(t_list **a, t_list **b)
{
	if(a == NULL || !(*a)->next || b == NULL || !(*b)->next)
		return(0);
	ft_dosa(a);
	ft_dosb(b);
	return(KEY_SS);
}