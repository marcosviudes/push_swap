/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:11:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:40:54 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/utils.h"

int		ft_dorra(t_list **a, int *ret_instruciton)
{
	if(a == NULL || *a == NULL)
		return(0);
	ft_lstrevrot(a);
	if(ret_instruciton)
		*ret_instruciton = KEY_RRA;
	return(1);
}