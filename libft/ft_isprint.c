/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:51:58 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 12:29:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d \n", ft_isprint('f'));
	printf("%d \n", ft_isprint(56));
	printf("%d \n", ft_isprint(' '));
	printf("%d\n", ft_isprint(127));
	printf("%d", ft_isprint(33));
}*/
