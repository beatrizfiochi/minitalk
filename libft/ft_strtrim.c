/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:50:54 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/05 14:41:15 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != 0)
		start++;
	while (s1[end] != '\0' && ft_strchr(set, s1[end]) != 0)
		end--;
	s2 = ft_substr(s1, start, (end - start + 1));
	return (s2);
}

/*int	main(void)
{
	char	str[] = "*****Beatriz*4*****";
	char	c[] = "*";

	printf("%s\n", ft_strtrim(str, c));
}*/
