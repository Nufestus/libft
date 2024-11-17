/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:32 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/13 14:53:26 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst <= src)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else if (dst > src)
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)
			*d-- = *s--;
	}
	return (dst);
}
