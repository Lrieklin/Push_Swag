/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:42:27 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:06:36 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	my_func(long res, int minus, int counter)
{
	if (counter > 10)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (counter == 10 && res > 2147483647 && !minus)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (counter == 10 && res > (long)2147483648 && minus)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (minus)
		return ((int)(res * -1));
	return ((int)res);
}

static const char	*ft_plus_minus(const char *str, int *minus)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*minus = 1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int				i;
	long			res;
	int				minus;
	int				counter;

	i = 0;
	res = 0;
	minus = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	str = ft_plus_minus(str, &minus);
	if (!ft_isdigit(str[i]))
		return (0);
	counter = 0;
	while (str[i + counter] >= '0' && str[i + counter] <= '9' )
	{
		res = res * 10 + str[i + counter] - '0';
		counter++;
	}
	return (my_func(res, minus, counter));
}
