/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:06:09 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 02:06:09 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

size_t	ft_uintlen(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	char	c;

	if (n > 9)
		ft_putunsignednbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}

int	print_base10(int nb)
{
	ft_putnbr_fd(nb, 1);
	return (ft_intlen(nb));
}

int	print_unsigned10(unsigned int nb)
{
	ft_putunsignednbr_fd(nb, 1);
	return (ft_uintlen(nb));
}
