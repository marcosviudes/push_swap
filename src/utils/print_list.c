/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:46:54 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/05 18:11:35 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int		getcontent(t_list *list)
{
	int	ret;
	int	*p;

	ret = 0;
	p = list->content;
	if (p != NULL)
		 ret = *p;
	return(ret);
}

void	ft_lstprint(t_list	*a, t_list *b)
{
	int	content_a;
	int	content_b;
	int pos;
	int	i;

	i = 0;
	printf("\n_________________");
	printf("\n");
	while (a != NULL || b != NULL)
	{
		content_a = -1;
		content_b = -1;
		pos = 0;
		if (a){
			if (a->pos != 0)
				pos = a->pos;
			content_a = getcontent(a);
			a = a->next;
		}
		if (b){
			content_b = getcontent(b);
			b = b->next;
		}

		i++;
		printf("%3i-> %d\t|\t%d pos:%i\n",i, content_a, content_b, pos);
	}
}
