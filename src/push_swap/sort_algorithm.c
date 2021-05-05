/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:38:11 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:52:41 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	push_minb(t_all *all)
{
	int		i;

	i = all->adata->count;
	while (i -- > 0)
	{
		if (all->adata->min == *(int *)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			return ;
		}
		ft_dora(&all->a, &all->b, 1);
	}
}

void	push_minmaxb(t_all *all)
{
	int		i;
	int		flag;

	flag = 0;
	i = all->adata->count;
	while (i -- > 0)
	{
		if (flag == 2)
			return ;
		if (all->adata->min == *(int *)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			flag++;
		}
		else if (all->adata->max == *(int *)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			flag++;
		}
		else
			ft_dora(&all->a, &all->b, 1);
	}
}

void	solve_five_less(t_all *all)
{
	if (all->init_len == 4)
	{
		push_minb(all);
		solve_three(all);
		ft_dopa(&all->a, &all->b, 1);
		return ;
	}
	if (all->init_len == 5)
	{
		push_minmaxb(all);
		if (*(int *)all->b->content < *(int *)all->b->next->content)
			ft_dosb(&all->a, &all->b, 1);
		solve_three(all);
		ft_dopa(&all->a, &all->b, 1);
		ft_dora(&all->a, &all->b, 1);
		ft_dopa(&all->a, &all->b, 1);
		return ;
	}
}

void	sort_algorithm(t_all *all)
{
	if (all->init_len == 1)
		return ;
	if (!ft_issorted(all->a))
	{
		if (all->init_len == 2)
			ft_dosa(&all->a, &all->b, 1);
		else if (all->init_len == 3)
			solve_three(all);
		else if (all->init_len <= 5)
			solve_five_less(all);
		else
			solve_hundred_less(all);
	}
}
