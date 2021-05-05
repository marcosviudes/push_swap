/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:47:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:53:32 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <limits.h>

void	get_minmax(t_data *data, t_list *list)
{
	int	num;

	data->min = INT_MAX;
	data->max = INT_MIN;
	while (list)
	{
		num = ft_ptoint(list->content);
		if (num < data->min)
			data->min = num;
		if (num > data->max)
			data->max = num;
		list = list->next;
	}
}

int	get_average(t_list	*list)
{
	int		sum;
	int		count;
	float	avg;

	sum = 0;
	count = 0;
	while (list)
	{
		sum += ft_ptoint(list->content);
		count++;
		list = list->next;
	}
	avg = sum / count;
	return ((int)avg);
}

void	get_data_algorithm(t_data *data, t_list *list)
{
	data->avg = get_average(list);
	get_minmax(data, list);
}

int	get_max_pos(t_list **stack)
{
	t_list	*aux;
	int		max;

	max = 0;
	aux = *stack;
	while (aux != NULL)
	{
		if (aux->pos > max)
			max = aux->pos;
		aux = aux->next;
	}
	return (max);
}

int	search_next_greater(t_list *st_b, int max)
{
	t_list	*aux;
	int		pos;
	int		len_b;

	aux = st_b;
	pos = 0;
	len_b = ft_lstsize(st_b);
	while (aux != NULL)
	{
		if (aux->pos == max)
			if (pos > (len_b / 2))
				return (1);
		aux = aux->next;
		pos++;
	}
	return (0);
}
