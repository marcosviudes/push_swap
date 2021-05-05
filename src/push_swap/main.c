/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:29:27 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 17:29:27 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <utils.h>
#include <libft.h>

void	free_list(t_list *list)
{
	if (list->next != NULL)
		free_list(list->next);
	free(list->content);
	free(list);
	list->content = NULL;
	list = NULL;
}

int	main(int argc, char **argv)
{
	t_all	all;

	if (argc < 2)
		return (0);
	all.a = get_args(argc, argv);
	all.init_len = ft_lstsize(all.a);
	all.b = NULL;
	all.adata = ft_calloc(1, sizeof(t_data));
	all.bdata = ft_calloc(1, sizeof(t_data));
	all.i = 0;
	all.adata->count = all.init_len;
	all.instruction = malloc(sizeof(int) * (argc - 1));
	get_data_algorithm((all).adata, (all).a);
	sort_algorithm(&all);
	ft_lstprint(all.a, all.b);
	free_list(all.a);
	return (0);
}
