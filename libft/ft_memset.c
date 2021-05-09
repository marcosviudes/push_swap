/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:53:56 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 13:41:28 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*a;
	size_t	i;

	a = str;
	i = 0;
	while (n > i)
	{
		a[i] = c;
		i++;
	}
	return (str);
}
