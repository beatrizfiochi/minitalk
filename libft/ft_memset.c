/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:59:23 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/15 17:06:17 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		((char *)s)[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	str1[] = "Beatriz";
	char	str2[] = "Beatriz";
	
	memset(str1 + 2, '*', 5);
	printf("%s \n", str1);

	ft_memset(str2 + 2, '*', 5);
	printf("%s", str2);
}*/
