/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:07:35 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:45:34 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorb(t_list **b, int	*ret_instruciton)
{
	if(b == NULL || *b == NULL)
		return(0);
	ft_lstrot(b);
	if(ret_instruciton != NULL)
		*ret_instruciton = KEY_RB;
	return(1);
}