/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dosa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:51:16 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 14:12:04 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dosa(t_list **a, int	*ret_instruciton)
{
	if(!ft_lstfswap(a))
		return(0);
	if(ret_instruciton)
		*ret_instruciton = KEY_SA;
	return(1);
}