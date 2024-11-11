/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:49 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/03 15:12:01 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;
	char	*str;

	i = 0;
	d = c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == d)
			return (&str[i]);
		i++;
	}
	if (str[i] == d)
		return (&str[i]);
	return (NULL);
}
