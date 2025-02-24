/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printletters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:05:53 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 02:05:53 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
	return (i);
}

int	print_percent(char c)
{
	return (print_char(c));
}
