/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:08:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 18:54:10 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_dorr(t_list **a, t_list **b, bool print)
{
	ft_dora(a, b, print);
	ft_dorb(b, b, print);
	if (print == true)
		ft_putendl_fd(STR_RR, 1);
	return (KEY_RR);
}
