/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:00:35 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/04 17:32:19 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	calc_res(int sign, char *str)
{
	long long	result;
	long long	prev;
	int			i;

	i = 0;
	prev = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (sign * (str[i] - '0'));
		if (prev > result && sign == 1)
			return (-1);
		else if (result > prev && sign == -1)
			return (0);
		prev = result;
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (calc_res(sign, (char *)(str + i)));
}
