/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:07:33 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 02:07:33 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int		ft_printf(const char *str, ...);

int		print_char(int c);
int		print_string(char *str);
int		print_percent(char c);

int		print_base10(int nb);
int		print_unsigned10(unsigned int nb);

int		print_hex(void *ptr);

int		hexhub(unsigned int nb, char type);
void	print_hexlower(unsigned int nb);
void	print_hexlower(unsigned int nb);

size_t	ft_uintlen(unsigned int n);
void	ft_putunsignednbr_fd(unsigned int n, int fd);

#endif