/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:03:59 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/07 21:27:20 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function prints a pointer following the format 0xhexnumber
//
// Returns the length

int	ft_putpt(void *pt)
{
	int	len;

	len = 0;
	if (pt == NULL)
		return (ft_putstr("(nil)"));
	len = len + ft_putstr("0x");
	len = len + ft_puthex((unsigned long long)pt, true);
	return (len);
}
