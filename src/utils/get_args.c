/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:42:19 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/22 19:43:20 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

t_list		*get_args(int argc, char **argv)
{
	int		i;
	int		*value;
	t_list	*ret;
	t_list	*temp;

	i = 1;
	ret = NULL;
	value = malloc(sizeof(int) * argc);
	while(argv[i])
	{
		if(!ft_isnum(argv[i]))
			return(NULL);
		value[i - 1] = ft_atoi(argv[i]);
		temp = ft_lstnew(&value[i - 1]);
		ft_lstadd_back(&ret, temp);
		i++;
	}
//	if(!check_duplicate(&value[1], argc))
//		return(NULL);
	return(ret);
}