/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:24:15 by psantos           #+#    #+#             */
/*   Updated: 2021/10/28 18:28:08 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *) s;
	while (*p)
	{
		if (*p == (char) c)
			return (p);
		p++;
	}
	if (c == 0 && *p == 0)
		return (p);
	return (NULL);
}
