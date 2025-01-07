/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:00:45 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/07 21:26:55 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function prints the number in hexadecimal
//
//mask to filter the bits
//		0xF000000000000000 first 4 bits
//
//shift 60 because an integer (long long) has 64bits,
//		and we'll start with the first 4 (64 - 4 = 60)
//
// var printed allows to ignore left zeros

int	ft_calchex(unsigned long long n, const char *hex)
{
	unsigned long long	mask;
	unsigned long long	shift;
	unsigned long long	tmp;
	bool				printed;
	int					len;

	mask = 0xF000000000000000;
	shift = 60;
	printed = false;
	len = 0;
	if (n == 0)
		return (ft_putchar(hex[0]));
	while (mask != 0)
	{
		tmp = (n & mask) >> shift;
		if ((tmp != 0) || (printed == true))
		{
			len = len + ft_putchar(hex[tmp]);
			printed = true;
		}
		mask = mask >> 4;
		shift = shift - 4;
	}
	return (len);
}

int	ft_puthex(unsigned long long n, bool is_lowercase)
{
	const char		hex_l[] = "0123456789abcdef";
	const char		hex_u[] = "0123456789ABCDEF";
	int				len;

	len = 0;
	if (is_lowercase)
		len = ft_calchex(n, hex_l);
	else
		len = ft_calchex(n, hex_u);
	return (len);
}
