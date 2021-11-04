/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:40:43 by psantos           #+#    #+#             */
/*   Updated: 2021/10/25 11:49:21 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == (unsigned char)c)
			return (ptr + index);
		index++;
	}
	return (NULL);
}
