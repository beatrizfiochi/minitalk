/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:09:05 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 14:43:02 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		size++;
	while (num != 0)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	long			num;

	len = ft_size(n);
	num = n;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	if (num < 0)
	{
		num = num * (-1);
		str[0] = '-';
	}
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-5684));
	printf("%s\n", ft_itoa(684));
}*/
