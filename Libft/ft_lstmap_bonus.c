/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:57:21 by clu               #+#    #+#             */
/*   Updated: 2024/11/11 13:50:11 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst -> content));
		if (!temp)
		{
			while (new_lst)
			{
				temp = new_lst -> next;
				del(new_lst -> content);
				free(new_lst);
				new_lst = temp;
			}
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst -> next;
	}
	return (new_lst);
}
