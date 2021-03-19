/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:14:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:47:04 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dorrb(t_list **b, int *ret_instruciton)
{
	if(b == NULL || *b == NULL)
		return(0);
	ft_lstrevrot(b);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_RRB;
	return(1);
}