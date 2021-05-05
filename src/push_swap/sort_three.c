/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:44:13 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:53:27 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	copy_arr_to_list(int *aux, t_list *temp)
{
	int		i;

	i = 0;
	while (i < 3)
	{
		aux[i] = *(int *)temp->content;
		temp = temp->next;
		i++;
	}
}

void	solve_three(t_all *all)
{
	int		aux[3];

	copy_arr_to_list(aux, all->a);
	if (aux[0] < aux[1] && aux[1] < aux[2])
		return ;
	if (aux[0] > aux[1])
	{
		if (aux[1] > aux[2])
		{
			ft_dosa(&all->a, &all->b, 1);
			ft_dorra(&all->a, &all->b, 1);
		}
		else if (aux[2] > aux[0])
			ft_dosa(&all->a, &all->b, 1);
		else
			ft_dora(&all->a, &all->b, 1);
	}
	else if (aux[0] > aux[2])
		ft_dorra(&all->a, &all->b, 1);
	else
	{
		ft_dosa(&all->a, &all->b, 1);
		ft_dora(&all->a, &all->b, 1);
	}
}
