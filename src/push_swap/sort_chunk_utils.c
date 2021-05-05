/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:33:22 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:53:18 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	*int_array(t_list *list)
{
	int	*arr;
	int	lst_len;
	int	i;

	i = 0;
	lst_len = ft_lstsize(list);
	arr = malloc(sizeof(int) * lst_len);
	while (list != NULL)
	{
		arr[i] = *(int *)list->content;
		i++;
		list = list->next;
	}
	return (arr);
}

void	order_int(int	*arr, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
			j++;
		}
		ft_swap(&arr[min_idx], &arr[i]);
		i++;
	}
	i = 0;
}

void	set_int_arrtolst(t_list **list, int *arr, int size)
{
	int		i;
	t_list	*temp;

	temp = *list;
	while (temp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if ((*(int *)temp->content) == arr[i])
				temp->pos = i + 1;
			i++;
		}
		temp = temp->next;
	}
}

void	push_maxof3b(t_all *all)
{
	int		i;

	i = ft_lstsize(all->a);
	while (i -- > 0)
	{
		if (all->a->pos > 3)
		{
			ft_dopb(&all->a, &all->b, 1);
			return ;
		}
		ft_dora(&all->a, &all->b, 1);
	}
}

int	search_next_item(t_list *st_a, int len_a, int len_chunk)
{
	t_list	*aux;
	int		pos;

	aux = st_a;
	pos = 0;
	while (aux != NULL)
	{
		if (aux->pos >= (len_a - len_chunk))
			if (pos >= (len_a / 2))
				return (1);
		pos++;
		aux = aux->next;
	}
	return (0);
}
