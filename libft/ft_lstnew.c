/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:30:31 by psantos           #+#    #+#             */
/*   Updated: 2021/10/29 14:27:30 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnode;

	nnode = (t_list *) malloc(sizeof(t_list));
	if (!nnode)
		return (NULL);
	nnode->content = content;
	nnode->next = NULL;
	return (nnode);
}
