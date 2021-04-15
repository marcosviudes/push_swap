/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:07:35 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/11 12:56:04 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>

int		ft_dorb(t_list **b)
{
	if(b == NULL || *b == NULL)
		return(0);
	ft_lstrot(b);
	ft_putendl_fd(STR_RB, 1);
	return(KEY_RB);
}