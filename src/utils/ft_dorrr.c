/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:16:38 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 15:01:42 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dorrr(t_list **a, t_list **b, int *ret_instruciton)
{
	if(!a || *a == NULL || !b || *b == NULL )
		return(0);
	ft_dorra(a, 0);
	ft_dorrb(b, 0);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_RRR;
	return(1);
}