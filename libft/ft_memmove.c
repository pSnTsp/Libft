/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:05:22 by psantos           #+#    #+#             */
/*   Updated: 2021/10/28 18:24:17 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)(dst);
	s = (char *)(src);
	if (d && s)
	{
		if ((s < d) && (d < (s + len)))
		{
			s += len;
			d += len;
			while (len--)
				*--d = *--s;
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
