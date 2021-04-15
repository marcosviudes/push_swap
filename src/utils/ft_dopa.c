/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:01:05 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/11 12:55:51 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>
# include <libft.h>

int		ft_dopa(t_list **a, t_list **b)
{
	if(!ft_lstpush(a, b))
		return(0);
	ft_putendl_fd(STR_PA, 1);
	return(KEY_PA);
}