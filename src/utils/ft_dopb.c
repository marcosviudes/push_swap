/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:06:18 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/11 13:33:20 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dopb(t_list **a, t_list **b)
{
	if(!ft_lstpush(b, a))
		return(0);
	ft_putendl_fd(STR_PB, 1);
	return(KEY_PB);
}