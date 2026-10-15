/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:48:07 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 14:49:22 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*currentnode;

	if (!lst || !f || !del)
		return (NULL);
	newlst = ft_lstnew(f(lst-> content));
	if (!newlst)
		return (NULL);
	lst = lst->next;
	currentnode = newlst;
	while (lst)
	{
		currentnode->next = ft_lstnew(f(lst->content));
		if (currentnode->next == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		currentnode = currentnode-> next;
		lst = lst-> next;
	}
	currentnode->next = NULL;
	return (newlst);
}
