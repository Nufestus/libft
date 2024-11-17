/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:09 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/03 15:31:20 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;

	d = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
