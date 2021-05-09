/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 17:10:03 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <get_next_line.h>
#include <libft.h>
#include <utils.h>

void	list_remove(t_list *list)
{
	if (list->next)
		list_remove(list->next);
	free(list->content);
	free(list);
}

int	do_instrucitons(t_all *all)
{
	t_list	*instructions;
	int		ret;

	instructions = all->instrucitons;
	while (instructions != NULL)
	{
		ret = do_the_instructions(&all->a,
				&all->b,
				instructions->pos);
		if (!ret)
			return (0);
		instructions = instructions->next;
	}
	return (1);
}

int	check_all(t_all *all)
{
	if (!do_instrucitons(all))
		return (0);
	if (!ft_issorted(all->a))
		return (0);
	if (all->b != NULL)
		return (0);
	return (1);
}

void	get_instructions(t_all *all)
{
	char	*buff;
	t_list	*temp;
	int		value;

	while (get_next_line(STDIN_FILENO, &buff) > EOF)
	{
		temp = ft_lstnew(0);
		value = valid_instruction(buff);
		free(buff);
		temp->pos = value;
		ft_lstadd_back(&all->instrucitons, temp);
		if (value == -1)
			exit_error();
		if (buff[0] == '\0')
			break ;
	}
}

int	main(int argc, char **argv)
{
	t_all	all;

	if (argc > 1)
	{
		all.a = get_args(argc, argv);
		all.b = NULL;
		if (!all.a)
			exit_error();
		get_instructions(&all);
		if (!check_all(&all))
		{
			free_list(all.a);
			list_remove(all.instrucitons);
			ft_putendl_fd(KO, 1);
			return (0);
		}
		free_list(all.a);
		list_remove(all.instrucitons);
		ft_putendl_fd(OK, 1);
	}
	return (0);
}
