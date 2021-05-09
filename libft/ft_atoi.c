/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:20:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 13:05:00 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	neg;
	long long int	r;

	i = 0;
	neg = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = ((r * 10) + (str[i] - '0') * neg);
		i++;
		if (r > 2147483647)
			return (-1);
		if (r < -2147483648)
			return (0);
	}
	return (r);
}
