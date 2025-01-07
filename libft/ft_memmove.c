/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:52:56 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 14:54:21 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*needed to test in cases with overlap (if (tmp_dest > tmp_src)) 
 * and without overlap (else)*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	tmp_dest = dest;
	tmp_src = src;
	if (!dest && !src)
		return (0);
	if (tmp_dest > tmp_src)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			*(tmp_dest++) = *(tmp_src++);
	return (dest);
}

/*int	main(void)
{
	char	text1[] = "abcdefghijklmnopqrstuvwyz";	
	char	text2[] = "abcdefghijklmnopqrstuvwyz";
	int	i = 4;
	int j = 11;
	size_t	n = 3;

	printf("Texto original: %s\n", text1);
	memmove(&text1[i], &text1[j], n);
	printf("Texto depois: %s\n", text1);
	ft_memmove(&text2[i], &text2[j], n);
	printf("Texto depois: %s\n", text2);
}*/
