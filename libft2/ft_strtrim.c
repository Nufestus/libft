/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:11 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/11 17:52:52 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc(char *str)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(ft_strlen(str) + 1);
	if (!string)
		return (NULL);
	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

static int	in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	startind;
	size_t	lastind;
	char	*trim;

	if (s1 != NULL && set == NULL)
		return (alloc((char *)s1));
	else if ((s1 == NULL && set == NULL) || (s1 == NULL && set != NULL))
		return (NULL);
	startind = 0;
	lastind = ft_strlen((char *)s1) - 1;
	while (in_set(s1[startind], (char *)set) && s1[startind] != '\0')
		startind++;
	if (s1[startind] == '\0')
		return (ft_strdup(""));
	while (in_set(s1[lastind], (char *)set) && lastind > startind)
		lastind--;
	trim = (char *)malloc(lastind - startind + 2);
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, s1 + startind, lastind - startind + 2);
	return (trim);
}
