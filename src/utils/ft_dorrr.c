/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:16:38 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/22 19:04:30 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorrr(t_list **a, t_list **b)
{
	if(!a || *a == NULL || !b || *b == NULL )
		return(0);
	ft_dorra(a);
	ft_dorrb(b);
	return(KEY_RRR);
}