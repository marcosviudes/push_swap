/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:25:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:53:00 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	create_chunk(t_list **a, t_list **b, int chunks)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(*a) - 1;
	len_b = ft_lstsize(*b);
	while (ft_lstsize(*b) - len_b <= (len_a / chunks))
	{
		if ((*a)->pos >= (len_a - (len_a / chunks)))
			ft_dopb(a, b, 1);
		else
		{
			if (search_next_item(*a, len_a, (len_a / chunks)) == 0)
			{
				while ((*a)->pos < (len_a - (len_a / chunks)))
					ft_dora(a, b, 1);
			}
			else
				while ((*a)->pos < (len_a - (len_a / chunks)))
					ft_dorra(a, b, 1);
		}
	}
}

void	return_greater_to_a(t_list **st_a, t_list **st_b)
{
	int	max;

	while (ft_lstsize(*st_b) > 0)
	{
		max = get_max_pos(st_b);
		if ((*st_b)->pos == max)
			ft_dopa(st_a, st_b, 1);
		else
		{
			if (search_next_greater(*st_b, max) == 1)
			{
				while ((*st_b)->pos != max)
					ft_dorrb(st_a, st_b, 1);
			}
			else
			{
				while ((*st_b)->pos != max)
					ft_dorb(st_a, st_b, 1);
			}
		}
	}
}

void	solve_hundred_less(t_all *all)
{
	int	chunks;
	int	*arr;

	arr = int_array(all->a);
	order_int(arr, ft_lstsize(all->a));
	set_int_arrtolst(&all->a, arr, ft_lstsize(all->a));
	while (ft_lstsize(all->a) >= 5)
	{
		if (ft_lstsize(all->a) >= 200)
			chunks = 11;
		else
			chunks = 5;
		create_chunk(&all->a, &all->b, chunks);
	}
	push_maxof3b(all);
	solve_three(all);
	return_greater_to_a(&all->a, &all->b);
	ft_dorra(&all->a, &all->b, 1);
	ft_dorra(&all->a, &all->b, 1);
	ft_dorra(&all->a, &all->b, 1);
	free(arr);
}
