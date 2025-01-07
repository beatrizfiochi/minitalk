/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:32:04 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/14 15:42:56 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d \n", ft_isascii('a'));
	printf("%d \n", ft_isascii('*'));
	printf("%d \n", ft_isascii('5'));
	printf("%d \n", ft_isascii(8));
	printf("%d", ft_isascii(128));
}*/
