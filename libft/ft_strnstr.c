/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:30:26 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/28 11:32:36 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;
	char	*str;

	big_i = 0;
	little_i = 0;
	str = (char *)big;
	if (little[little_i] == '\0')
		return (str);
	while (big[big_i] != '\0')
	{
		if ((big[big_i] == little[little_i]) && (big_i < len))
		{
			big_i++;
			little_i++;
			if (little[little_i] == '\0')
				return (&str[big_i - little_i]);
		}
		else
		{
			big_i = big_i - (little_i - 1);
			little_i = 0;
		}
	}
	return (0);
}

/*int	main(void)
{
	char	big_s[] = "Pereira";
	char	little_s[] = "eira";

	printf("%s\n", ft_strnstr(big_s, little_s, 10));
}*/
