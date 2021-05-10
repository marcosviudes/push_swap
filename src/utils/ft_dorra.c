/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:11:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 18:56:39 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_dorra(t_list **a, t_list **b, bool print)
{
	(void)b;
	ft_lstrevrot(a);
	if (print == true)
		ft_putendl_fd(STR_RRA, 1);
	return (KEY_RRA);
}
