/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:42:19 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/01 15:32:24 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int			matrix_len(char **matrix)
{
	int		i;

	i = 0;
	while(matrix[i])
		i++;
	return(i);
}

t_list		*get_args(int argc, char **argv)
{
	int		i;
	int		*value;
	t_list	*ret;
	t_list	*temp;

	ret = NULL;
	if(argc != 2)
	{
		i = argc;
		value = malloc(sizeof(int) * argc);
		while(i-- >= 2)
		{
			if(!ft_isnum(argv[i]))
				return(NULL);
			value[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&value[i]);
			ft_lstadd_front(&ret, temp);
		}
	}
	else
	{
		char **spline;

		i = 0;
		spline = ft_split(argv[1], ' ');
		value = malloc(sizeof(int) * matrix_len(spline));
		while(spline[i])
		{
			if(!ft_isnum(spline[i]))
				return(NULL);
			value[i] = ft_atoi(spline[i]);
			temp = ft_lstnew(&value[i]);
			ft_lstadd_back(&ret, temp);
			i++;
		}
		while(i--)
			free(spline[i]);
	}
//	if(!check_duplicate(&value[1], argc))
//		return(NULL);
	return(ret);
}