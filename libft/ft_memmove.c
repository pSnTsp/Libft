/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:05:22 by psantos           #+#    #+#             */
/*   Updated: 2021/11/03 10:13:06 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst + len - 1;
	s = (unsigned char *) src + len - 1;
	if ((uintptr_t) src <= (uintptr_t) dst
		&& (uintptr_t) s < (uintptr_t) d)
	{
		while (len--)
			*d-- = *s--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
