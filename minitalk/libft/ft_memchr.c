/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:14:55 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 15:04:44 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	unsigned char	s1[] = "Beatriz Fiochi";
	unsigned char	s2[] = "Beatriz Fiochi";
	
	printf("%s\n",(char *)memchr(s1, 'i', 10));
	printf("%s\n", (char *)ft_memchr(s2, 'i', 10));
}*/
