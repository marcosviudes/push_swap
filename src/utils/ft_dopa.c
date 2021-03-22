/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:01:05 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/22 19:01:17 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <utils.h>
# include <libft.h>

int		ft_dopa(t_list **a, t_list **b)
{
	if(!ft_lstpush(a, b))
		return(0);
	return(KEY_PA);
}