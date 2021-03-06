/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:56:41 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 13:43:18 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	const char	*src;
	char		*dest;
	size_t		i;

	if (!(str1 || str2 || n) || (str1 == NULL && str2 == NULL))
		return (0);
	i = 0;
	dest = str1;
	src = str2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
