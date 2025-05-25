/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:28:15 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 12:59:53 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_i;
	size_t	src_j;
	char	*s;

	dst_i = ft_strlen(dst);
	src_j = 0;
	s = (char *)src;
	if (size == 0)
		return (ft_strlen(src));
	while (s[src_j] != '\0' && dst_i + src_j < size - 1)
	{
		dst[dst_i + src_j] = s[src_j];
		src_j++;
	}
	dst[dst_i + src_j] = '\0';
	if (dst_i >= size)
		return (size + ft_strlen(src));
	else
		return (dst_i + ft_strlen(src));
}

/*int	main(void)
{
	char	dst[] = "Beatriz Fiochi Soares da Silva ";
	char	dst2[] = "Beatriz Fiochi Soares da Silva ";
	char	src[] = "Junho";
	size_t	n = 50;
	size_t	n2 = 6;

	printf("%zu\n", ft_strlcat(dst, src, n));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst2, src, n2));
	printf("%s\n", dst2);
}*/
