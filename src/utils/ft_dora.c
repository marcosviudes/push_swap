/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dora.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 13:59:14 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dora(t_list **a, int	*ret_instruciton)
{
	if(a == NULL || *a == NULL)
		return(0);
	ft_lstrot(a);
	if(ret_instruciton)
		*ret_instruciton = KEY_RA;
	return(1);
}