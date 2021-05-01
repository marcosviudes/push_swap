/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dosa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:51:16 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/01 17:03:07 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dosa(t_list **a, t_list **b, bool print)
{
	(void)b;
	if(!ft_lstfswap(a))
		return(0);
	if(print == true)
		ft_putendl_fd(STR_SA, 1);
	return(KEY_SA);
}