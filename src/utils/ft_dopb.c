/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:06:18 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/01 14:06:00 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dopb(t_list **a, t_list **b, bool print)
{

	if(!ft_lstpush(b, a))
		return(0);
	if(print == true)
		ft_putendl_fd(STR_PB, 1);
	return(KEY_PB);
}