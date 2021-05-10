/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:42:19 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 19:08:42 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>
#include <limits.h>

int	are_duplicates_num(t_list *list)
{
	int		num;
	t_list	*temp;

	while (list != NULL)
	{
		temp = list->next;
		num = *(int *)list->content;
		while (temp != NULL)
		{
			if (num == *(int *)temp->content)
				return (true);
			temp = temp->next;
		}
		list = list->next;
	}
	return (false);
}

static long long int	ft_atol(const char *str)
{
	long long int	i;
	long long int	neg;
	long long int	ret;

	i = 0;
	neg = 1;
	ret = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ((ret * 10) + (str[i] - '0') * neg);
		i++;
	}
	return (ret);
}

t_list	*get_multiple_strings(char **spline)
{
	t_list	*temp;
	t_list	*ret;
	int		value;
	int		i;

	i = 0;
	ret = NULL;
	while (spline[i])
	{
		if (ft_strlen(spline[i]) > LEN_INT_MAX)
			return (NULL);
		if (!ft_isnum(spline[i]))
			return (NULL);
		value = ft_atoi(spline[i]);
		temp = ft_lstnew(value);
		ft_lstadd_back(&ret, temp);
		i++;
	}
	while (i--)
		free(spline[i]);
	free(spline);
	return (ret);
}

t_list	*fill_list(int argc, char **argv)
{
	t_list			*temp;
	t_list			*ret;
	long long int	value;

	while (--argc > 0)
	{
		if (ft_strlen(argv[argc]) > LEN_INT_MAX)
			return (NULL);
		if (!ft_isnum(argv[argc]))
			return (NULL);
		value = ft_atol(argv[argc]);
		if (value > INT_MAX || value < INT_MIN)
			return (NULL);
		temp = ft_lstnew((int)value);
		ft_lstadd_front(&ret, temp);
	}
	return (ret);
}

t_list	*get_args(int argc, char **argv)
{
	char	**spline;
	t_list	*ret;

	ret = NULL;
	if (argc != 2)
		ret = fill_list(argc, argv);
	else
	{
		spline = ft_split(argv[1], ' ');
		ret = get_multiple_strings(spline);
	}
	if (are_duplicates_num(ret))
		ret = NULL;
	return (ret);
}
