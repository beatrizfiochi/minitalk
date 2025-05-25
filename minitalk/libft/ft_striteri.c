/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:16:15 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 09:40:49 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void	ft_modifychar(unsigned int i, char *str)
{
	i = 0;
	if (str[i] == ' ')
	{
		str[i] = '*';
		i++;
	}
}

int	main(void)
{
	char	str[] = "B F S S";

	ft_striteri(str, ft_modifychar);
	printf("%s", str);
	return (0);
}*/
