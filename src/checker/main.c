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
	if (ft_strncmp(line, "sa", 3) == 0)
		return (KEY_SA);
	else if (ft_strncmp(line, "sb", 3) == 0)
		return (KEY_SB);
	else if (ft_strncmp(line, "ss", 3) == 0)
		return (KEY_SS);
	else if (ft_strncmp(line, "pa", 3) == 0)
		return (KEY_PA);
	else if (ft_strncmp(line, "pb", 3) == 0)
		return (KEY_PB);
	else if (ft_strncmp(line, "ra", 3) == 0)
		return (KEY_RA);
	else if (ft_strncmp(line, "rb", 3) == 0)
		return (KEY_RB);
	else if (ft_strncmp(line, "rr", 3) == 0)
		return (KEY_RR);
	else if (ft_strncmp(line, "rra", 4) == 0)
		return (KEY_RRA);
	else if (ft_strncmp(line, "rrb", 4) == 0)
		return (KEY_RRB);
	else if (ft_strncmp(line, "rrr", 4) == 0)
		return (KEY_RRR);
	else if (line[0] == '\0')
		return(0);
	return(-1);
}

int			check_duplicate(int	*numbers, int size)
{
	int		i;
	int		j;
	int		*doubles;

	doubles = ft_calloc(sizeof(numbers),1);
	i = 0;
	while (i < size)
	{
		doubles[i] = numbers[i];
		j = 0;
		while (j < size)
		{
			if (numbers[i] == doubles[j])
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
	while (all->instrucitons)
	{
		if (all->instrucitons->pos == KEY_SA)
			ret = ft_dosa(a, b, 0);
		else if (all->instrucitons->pos == KEY_SB)
			ret = ft_dosb(a, b, 0);
		else if (all->instrucitons->pos == KEY_SS)
			ret = ft_doss(a, b, 0);
		else if (all->instrucitons->pos == KEY_PA)
			ret = ft_dopa(a, b, 0);
		else if (all->instrucitons->pos == KEY_PB)
			ret = ft_dopb(a, b, 0);
		else if (all->instrucitons->pos == KEY_RA)
			ret = ft_dora(a, b, 0);
		else if (all->instrucitons->pos == KEY_RB)
			ret = ft_dorb(a, b, 0);
		else if (all->instrucitons->pos == KEY_RR)
			ret = ft_dorr(a, b, 0);
		else if (all->instrucitons->pos == KEY_RRA)
			ret = ft_dorra(a, b, 0);
		else if (all->instrucitons->pos == KEY_RRB)
			ret = ft_dorrb(a, b, 0);
		else if (all->instrucitons->pos == KEY_RRR)
			ret = ft_dorrr(a, b, 0);
		else if (all->instrucitons->pos == 0)
			return (1);
		if (ret == 0)
			return(0);
//		ft_lstprint(all->a, all->b);
		i++;
	}
	return(1);
}

int		check_all(t_all *all)
{
	if (!do_instrucitons(all))
		return(0);
	if (!ft_issorted(all->a))
		return(0);
	if (all->b != NULL)
		return(0);
	return(1);
}

void	newinstruction(t_list **list, int instruciton)
{
	
}
int     main(int argc, char **argv)
{
	t_all	all;
	int		content_a;
	char	*buff;
	int		i;
 
	all.init_len = argc - 1;
	i = 0;
	if (argc > 1)
	{
		all.instrucitons = ft_lstnew(NULL);
		all.a = get_args(argc, argv);
		if(!all.a)
			exit()
		all.b = NULL;
		if (!all.a)
			exit_error();
		while (get_next_line(STDIN_FILENO, &buff) > 0)
		{
			if (buff[0] == '\0')
				break;
			all.instrucitons[i] = valid_instruction(buff);
			if (all.instrucitons[i]== -1)
				exit_error();
			i++;
		}
//		ft_lstprint(all.a, all.b);
		all.instructions_len = i;
		if (!check_all(&all))
		{
			ft_lstprint(all.a, all.b);
			printf(KO);
			return(0);
		}
		printf(OK);
		ft_lstprint(all.a, all.b);
	}
//	getchar();
	return (0);
}
