/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:01:05 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 18:02:38 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>
#include <libft.h>

int	ft_dopa(t_list **a, t_list **b, bool print)
{
	if (!ft_lstpush(a, b))
		return (0);
	if (print == true)
		ft_putendl_fd(STR_PA, 1);
	return (KEY_PA);
}
