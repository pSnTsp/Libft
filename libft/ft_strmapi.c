/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:52:10 by psantos           #+#    #+#             */
/*   Updated: 2021/10/28 12:58:44 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	if ((!s || !f))
		return (0);
	index = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[index] != '\0')
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
