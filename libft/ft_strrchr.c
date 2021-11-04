/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:58:52 by psantos           #+#    #+#             */
/*   Updated: 2021/10/28 18:29:03 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char) c)
			p = (char *) s;
		s++;
	}
	if (c == 0 && *s == 0)
		p = (char *) s;
	return (p);
}
