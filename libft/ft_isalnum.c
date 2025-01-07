/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:46:42 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/14 16:39:27 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 0 && ft_isdigit(c) == 0)
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d \n", ft_isalnum('*'));
	printf("%d \n", ft_isalnum('2'));
	printf("%d", ft_isalnum('s'));
}*/
