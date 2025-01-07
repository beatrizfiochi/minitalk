/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:00:49 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/15 17:40:23 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	str1[] = "Beatriz";
	char	str2[] = "Beatriz";
	size_t	i = 4;

	bzero(str1, i);
	printf("%s \n", str1);
	printf("%s \n", str1 + i);

	ft_bzero(str2, i);
	printf("%s \n", str2);
	printf("%s", str2 + i);
}*/
