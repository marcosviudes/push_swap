/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dora.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:04 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 18:03:32 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_dora(t_list **a, t_list **b, bool print)
{
	(void)b;
	if (a == NULL || *a == NULL)
		return (0);
	ft_lstrot(a);
	if (print == true)
		ft_putendl_fd(STR_RA, 1);
	return (KEY_RA);
}
