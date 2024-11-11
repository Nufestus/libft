/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:39:32 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/11 15:29:43 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			tsize;
	size_t			i;

	i = 0;
	tsize = count * size;
	if (count != 0 && tsize / count != size)
		return (NULL);
	tmp = (unsigned char *) malloc (tsize);
	if (tmp == NULL)
		return (NULL);
	while (i < tsize)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *) tmp);
}
