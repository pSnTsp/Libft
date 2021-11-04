/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:18:28 by psantos           #+#    #+#             */
/*   Updated: 2021/10/28 18:27:03 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		if (nb <= 9)
			ft_putchar_fd((nb + '0'), fd);
		else
		{
			ft_putnbr_fd((nb / 10), fd);
			ft_putchar_fd((nb % 10 + '0'), fd);
		}
	}
}
