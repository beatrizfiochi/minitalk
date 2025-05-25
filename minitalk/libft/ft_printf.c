/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:35:51 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/07 21:26:27 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function prints the given string replacing the format specifier
//			(%c, %i etc) with the variable content
//
// Return the length of the printed string

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			len = len + ft_format(args, *++format);
		else
			len = len + ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
