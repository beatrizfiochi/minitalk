/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:04:30 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/01 11:34:50 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	len;
	char	*str;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	len = l1 + l2;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, l1 + 1);
	ft_strlcpy(str + l1, s2, l2 + 1);
	return (str);
}

/*int	main(void)
{
	char	s1[] = "Beatriz ";
	char	s2[] = "F S da Silva";

	printf("%s\n", ft_strjoin(s1, s2));
}*/
