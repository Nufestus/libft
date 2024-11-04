/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:25 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/03 15:02:24 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char)c;
	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == a)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
