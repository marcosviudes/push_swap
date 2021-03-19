/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:06:18 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:39:14 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dopb(t_list **a, t_list **b, int	*ret_instruciton)
{
	if(!ft_lstpush(b, a))
		return(0);
	if(ret_instruciton)
		*ret_instruciton = KEY_PB;
	return(1);
}