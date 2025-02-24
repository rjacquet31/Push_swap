/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:10:38 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 02:10:38 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_atouint(const char *hex)
{
	unsigned int	result;
	size_t			i;

	if (!hex)
		return (0);
	result = 0;
	i = 0;
	while (hex[i] != '\0')
	{
		result *= 16;
		if (hex[i] >= '0' && hex[i] <= '9')
			result += hex[i] - '0';
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			result += hex[i] - 'A' + 10;
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			result += hex[i] - 'a' + 10;
		else
			return (0);
		i++;
	}
	return (result);
}
