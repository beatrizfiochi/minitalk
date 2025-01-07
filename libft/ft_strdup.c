/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:34:09 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/28 15:52:19 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s) + 1;
	dest = (char *)malloc(i);
	if (dest == 0)
		return (0);
	ft_strlcpy(dest, s, i);
	return (dest);
}

/*int	main(void)
{
	char	str[] = "Beatriz";

	printf("%s", ft_strdup(str));
}*/
