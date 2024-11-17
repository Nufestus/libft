/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:30 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/12 19:57:11 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst == src)
		return ((char *) dst);
	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
