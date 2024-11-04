/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:14 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/04 17:31:59 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*rtrn(int n, char *num, size_t len)
{
	unsigned int	abs;
	char			*index;

	index = "0123456789";
	num[len--] = '\0';
	if (n == 0)
	{
		num[0] = '0';
		return (num);
	}
	if (n < 0)
	{
		num[0] = '-';
		abs = -n;
	}
	else
		abs = n;
	while (abs > 0)
	{
		num[len--] = index[abs % 10];
		abs /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = count_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = (char *) malloc (len + 1);
	if (num == NULL)
		return (NULL);
	num = rtrn(n, num, len);
	return (num);
}
