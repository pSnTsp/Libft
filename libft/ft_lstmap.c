/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:51:14 by psantos           #+#    #+#             */
/*   Updated: 2021/10/29 17:09:15 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*curr;

	if (!lst || !f)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	curr = start;
	lst = lst->next;
	while (lst && curr)
	{
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
			ft_lstclear(&start, del);
		lst = lst->next;
		curr = curr->next;
	}
	return (start);
}
