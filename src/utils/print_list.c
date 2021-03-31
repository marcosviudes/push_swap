/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:46:54 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/29 11:11:54 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int		getcontent(t_list *list)
{
	int	ret;
	int	*p;

	ret = 0;
	p = list->content;
	if(p != NULL)
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
		if(a){
			content_a = getcontent(a);
			a = a->next;
		}
		if(b){
			content_b = getcontent(b);
			b = b->next;
		}
		i++;
		printf("%3i-> %d\t|\t%d\n",i, content_a, content_b);
	}
}