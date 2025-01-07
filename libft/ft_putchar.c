/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:11:54 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/08/25 14:10:41 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// This function print a char
//
// write(file descriptor, variable's address, len)
//			1 - standart output

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
