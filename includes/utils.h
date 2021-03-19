/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:29:54 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/19 13:50:10 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/libft.h"
# include "../src/utils/stacklib.h"

#define KEY_SA		1
#define KEY_SB		2
#define KEY_SS		3
#define KEY_PA		4
#define KEY_PB		5
#define KEY_RA		6
#define KEY_RB		7
#define KEY_RR		8
#define KEY_RRA		9
#define KEY_RRB		10
#define KEY_RRR		11

int		ft_dosa(t_list **a, int	*ret_instruciton);
int		ft_dosb(t_list **b, int	*ret_instruciton);
int		ft_doss(t_list **a, t_list **b, int	*ret_instruciton);
int		ft_dopa(t_list **a, t_list **b, int	*ret_instruciton);
int		ft_dopb(t_list **a, t_list **b, int	*ret_instruciton);
int		ft_dora(t_list **a, int	*ret_instruciton);
int		ft_dorb(t_list **b, int	*ret_instruciton);
int		ft_dorr(t_list **a, t_list **b, int *ret_instruciton);
int		ft_dorra(t_list **a, int *ret_instruciton);
int		ft_dorrb(t_list **b, int *ret_instruciton);
int		ft_dorrr(t_list **a, t_list **b, int *ret_instruciton);
#endif