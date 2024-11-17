/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:56 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/11 17:41:46 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle(char *str, char *str1)
{
	char	*string;

	if (str1 != NULL && str == NULL)
	{
		string = malloc(ft_strlen(str1) + 1);
		if (!string)
			return (NULL);
		ft_strlcat(string, str1, ft_strlen(str1) + 1);
		return (string);
	}
	else if (str != NULL && str1 == NULL)
	{
		string = malloc(ft_strlen(str) + 1);
		if (!string)
			return (NULL);
		ft_strlcat(string, str, ft_strlen(str) + 1);
		return (string);
	}
	else
		return (NULL);
}

static void	fillfirst(const char *s1, char *join, int i)
{
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*join;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (handle((char *)s1, (char *)s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	j = 0;
	join = (char *) malloc(s1len + s2len + 1);
	if (join == NULL)
		return (NULL);
	fillfirst(s1, join, i);
	i = s1len;
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	join[i] = '\0';
	return (join);
}
