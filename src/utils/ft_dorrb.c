/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:14:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 18:56:23 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_dorrb(t_list **a, t_list **b, bool print)
{
	(void)a;
	ft_lstrevrot(b);
	if (print == true)
		ft_putendl_fd(STR_RRB, 1);
	return (KEY_RRB);
}
