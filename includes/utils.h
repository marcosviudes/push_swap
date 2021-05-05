/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:29:54 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:58:28 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "libft.h"
# include <stdbool.h>

#define KEY_SA		1
#define KEY_SB		2
#define KEY_SS		3
#define KEY_PA		4
#define KEY_PB		5
#define KEY_RA		6
#define KEY_RB		7
#define KEY_RR		14
#define KEY_RRA		9
#define KEY_RRB		10
#define KEY_RRR		19

#define STR_SA		"sa"
#define STR_SB		"sb"
#define STR_SS		"ss"
#define STR_PA		"pa"
#define STR_PB		"pb"
#define STR_RA		"ra"
#define STR_RB		"rb"
#define STR_RR		"rr"
#define STR_RRA		"rra"
#define STR_RRB		"rrb"
#define STR_RRR		"rr"

int		ft_dosa(t_list **a, t_list **b, bool print);
int		ft_dosb(t_list **a, t_list **b, bool print);
int		ft_doss(t_list **a, t_list **b, bool print);
int		ft_dopa(t_list **a, t_list **b, bool print);
int		ft_dopb(t_list **a, t_list **b, bool print);
int		ft_dora(t_list **a, t_list **b, bool print);
int		ft_dorb(t_list **a, t_list **b, bool print);
int		ft_dorr(t_list **a, t_list **b, bool print);
int		ft_dorra(t_list **a, t_list **b, bool print);
int		ft_dorrb(t_list **a, t_list **b, bool print);
int		ft_dorrr(t_list **a, t_list **b, bool print);
t_list	*get_args(int argc, char **argv);
void	ft_lstprint(t_list	*a, t_list *b);
int		getcontent(t_list *list);
int		ft_issorted(t_list *lst);
int		ft_isreversed(t_list *lst);
int		ft_ptoint(int *p);
#endif
