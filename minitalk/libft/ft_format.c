/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:14:41 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/07 21:28:29 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function process one format specifier and return the length of
//			the printed string

int	ft_format(va_list args, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putpt(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putsignednbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), true));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), false));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
