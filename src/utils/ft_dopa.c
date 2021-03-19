/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:01:05 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:58:11 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dopa(t_list **a, t_list **b, int	*ret_instruciton)
{
	if(!ft_lstpush(a, b))
		return(0);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_PA;
	return(1);
}