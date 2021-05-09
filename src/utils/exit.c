/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:37:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 12:38:30 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

void	exit_error(void)
{
	ft_putendl_fd(ERROR, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	free_list(t_list *list)
{
	if (list->next != NULL)
		free_list(list->next);
	free(list->content);
	free(list);
	list->content = NULL;
	list = NULL;
}
