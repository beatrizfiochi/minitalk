/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:48:29 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/07 21:27:10 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(unsigned long long n)
{
	int	i;

	i = 1;
	if (n > 9)
	{
		i = i + ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
	return (i);
}

int	ft_putsignednbr(long long sn)
{
	int					i;
	unsigned long long	n;

	i = 0;
	if (sn < 0)
	{
		i = ft_putchar('-');
		n = sn * (-1);
	}
	else
		n = sn;
	return (i + ft_putnbr(n));
}
