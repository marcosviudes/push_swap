/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:52:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 18:47:57 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_doss(t_list **a, t_list **b, bool print)
{
	ft_dosa(a, b, print);
	ft_dosb(b, b, print);
	if (print == true)
		ft_putendl_fd(STR_SS, 1);
	return (KEY_SS);
}
