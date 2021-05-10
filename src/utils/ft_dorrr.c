/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:16:38 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 18:50:46 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_dorrr(t_list **a, t_list **b, bool print)
{
	ft_dorra(a, b, print);
	ft_dorrb(b, b, print);
	if (print == true)
		ft_putendl_fd(STR_RRR, 1);
	return (KEY_RRR);
}
