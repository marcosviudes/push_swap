/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/18 13:21:15 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <get_next_line.h>
#include <libft.h>

int		valid_instruction(char *line)
{
	if(ft_strncmp(line, "sa", 3) == 0)
		return (KEY_SA);
	else if(ft_strncmp(line, "sb", 3) == 0)
		return (KEY_SB);
	else if(ft_strncmp(line, "ss", 3) == 0)
		return (KEY_SS);
	else if(ft_strncmp(line, "pa", 3) == 0)
		return (KEY_PA);
	else if(ft_strncmp(line, "pb", 3) == 0)
		return (KEY_PB);
	else if(ft_strncmp(line, "ra", 3) == 0)
		return (KEY_RA);
	else if(ft_strncmp(line, "rb", 3) == 0)
		return (KEY_RB);
	else if(ft_strncmp(line, "rr", 3) == 0)
		return (KEY_RR);
	else if(ft_strncmp(line, "rra", 4) == 0)
		return (KEY_RRA);
	else if(ft_strncmp(line, "rrb", 4) == 0)
		return (KEY_RRB);
	else if(ft_strncmp(line, "rrr", 4) == 0)
		return (KEY_RRR);
	else if(line[0] == '\0')
		return(0);
	return(-1);
}
void	exit_error()
{
	printf(ERROR);
	exit(EXIT_FAILURE);
}

void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}

int			check_duplicate(int	*numbers, int size)
{
	int		i;
	int		j;
	int		*doubles;

	doubles = ft_calloc(sizeof(numbers),1);
	i = 0;
	while(i < size)
	{
		doubles[i] = numbers[i];
		j = 0;
		while(j < size)
		{
			if(numbers[i] == doubles[j])
			j++;
		}
		i++;
	}
	return 0;
}

int		do_instrucitons(t_all *all)
{
	int		i;
	int		ret;
	t_list **a;
	t_list **b;

	a = &(all->a);
	b = &(all->b);
	i = 0;
	ret = 1;
	while(i < all->instructions_len)
	{
		if(all->instrucitons[i] == KEY_SA)
			ret = ft_dosa(a);
		else if(all->instrucitons[i] == KEY_SB)
			ret = ft_dosb(b);
		else if(all->instrucitons[i] == KEY_SS)
			ret = ft_doss(a, b);
		else if(all->instrucitons[i] == KEY_PA)
			ret = ft_dopa(a, b);
		else if(all->instrucitons[i] == KEY_PB)
			ret = ft_dopb(a, b);
		else if(all->instrucitons[i] == KEY_RA)
			ret = ft_dora(a);
		else if(all->instrucitons[i] == KEY_RB)
			ret = ft_dorb(b);
		else if(all->instrucitons[i] == KEY_RR)
			ret = ft_dorr(a, b);
		else if(all->instrucitons[i] == KEY_RRA)
			ret = ft_dorra(a);
		else if(all->instrucitons[i] == KEY_RRB)
			ret = ft_dorrb(b);
		else if(all->instrucitons[i] == KEY_RRR)
			ret = ft_dorrr(a, b);
		else if(all->instrucitons[i] == 0)
			return (1);
		if(ret == 0)
			return(0);
		i++;
	}
	return(1);
}
int		check_all(t_all *all)
{
	if(!do_instrucitons(all))
		return(0);
	ft_lstprint(all->a, all->b);
	if(!ft_issorted(all->a))
		return(0);
	if(all->b->content)
		return(0);
	return(1);
}
void	free_all(t_all *all)
{
	return;
}
int     main(int argc, char **argv)
{
	t_all	all;
	int		content_a;
	char	*buff;
	int		i;

	int		fd;
	all.first_a = &(all).a;
	all.init_len = argc - 1;
	i = 0;
	if(argc > 1)
	{
		all.instrucitons = ft_calloc(argc, sizeof(int));
		all.a = get_args(argc, argv);
		all.first_a = all.a;
		all.b = ft_calloc(sizeof(t_list), 1);
		if(!all.a)
			exit_error();
		i = 0;
		while(get_next_line(STDIN_FILENO, &buff) > 0)
		{
			if(buff[0] == '\0')
				break;
			all.instrucitons[i] = valid_instruction(buff);
			if(all.instrucitons[i]== -1)
				exit_error();
			i++;
		}
		ft_lstprint(all.a, all.b);
		all.instructions_len = i;
		if(!check_all(&all))
		{
			ft_lstprint(all.a, all.b);
			printf(KO);
			return(0);
		}
		printf(OK);
	}
	ft_lstprint(all.a, all.b);
	return (0);
}
