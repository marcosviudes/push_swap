/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:06:21 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/08 14:06:40 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int	valid_instruction(char	*line)
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
		return (0);
	return (-1);
}

int	do_the_instructions(t_list **a, t_list **b, int instruction)
{
	if (instruction == KEY_SA)
		return (ft_dosa(a, b, 0));
	else if (instruction == KEY_SB)
		return (ft_dosb(a, b, 0));
	else if (instruction == KEY_SS)
		return (ft_doss(a, b, 0));
	else if (instruction == KEY_PA)
		return (ft_dopa(a, b, 0));
	else if (instruction == KEY_PB)
		return (ft_dopb(a, b, 0));
	else if (instruction == KEY_RA)
		return (ft_dora(a, b, 0));
	else if (instruction == KEY_RB)
		return (ft_dorb(a, b, 0));
	else if (instruction == KEY_RR)
		return (ft_dorr(a, b, 0));
	else if (instruction == KEY_RRA)
		return (ft_dorra(a, b, 0));
	else if (instruction == KEY_RRB)
		return (ft_dorrb(a, b, 0));
	else if (instruction == KEY_RRR)
		return (ft_dorrr(a, b, 0));
	else if (instruction == 0)
		return (1);
	return (0);
}
