/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:46:54 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/22 19:56:17 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int		getcontent(t_list *list)
{
	int	ret;
	int	*p;

	p = list->content;
	ret = *p;
	return(ret);
}

void	ft_lstprint(t_list	*a, t_list *b)
{
	int	content_a;
	int	content_b;
	int	i;

	i = 0;
	printf("\n_________________");
	printf("\n");
	while(a != NULL || b != NULL)
	{
		content_a = 0;
		content_b = 0;
		if(a->content){
			content_a = getcontent(a);
			a = a->next;
		}
		if(b->content){
			content_b = getcontent(b);
			b = b->next;
		}
		i++;
		printf("%3i-> %d\t|\t%d\n",i, content_a, content_b);
	}
}