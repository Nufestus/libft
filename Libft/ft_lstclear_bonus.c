/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:19:08 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/04 17:13:28 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*copy;
	t_list	*next;

	if (!lst || !del)
		return ;
	copy = *lst;
	while (copy)
	{
		next = copy->next;
		(*del)(copy->content);
		free(copy);
		copy = next;
	}
	*lst = NULL;
}
