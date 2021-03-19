/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dosb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:50:19 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:42:56 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dosb(t_list **b, int	*ret_instruciton)
{
	if(!ft_lstfswap(b))
		return(0);
	if(ret_instruciton)
		*ret_instruciton = KEY_SB;
	return(1);
}