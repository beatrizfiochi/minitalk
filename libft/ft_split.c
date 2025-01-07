/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:29:39 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 11:52:13 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **new, int i)
{
	while (i > 0)
	{
		i--;
		free(new[i]);
	}
	free(new);
	return (0);
}

static int	ft_count(const char *s, char c)
{
	int		words;
	char	*str;

	words = 0;
	str = (char *)s;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			words++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (words);
}

static char	*ft_fillwords(const char *s, char c)
{
	char	*str;
	char	*rest;
	char	*new;
	size_t	start;
	size_t	end;

	start = 0;
	str = (char *)s;
	rest = ft_strchr(str, (int)c);
	if (rest != 0)
		end = ft_strlen(str) - ft_strlen(rest);
	else
		end = ft_strlen(str);
	new = ft_substr(str, start, end);
	return (new);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**new;
	char	*str;
	size_t	i;

	if (s == 0)
		return (0);
	words = ft_count(s, c);
	new = (char **)malloc((words + 1) * sizeof(char *));
	if (new == 0)
		return (0);
	i = 0;
	str = (char *)s;
	while (i < words)
	{
		while (*str == c)
			str++;
		new[i] = ft_fillwords(str, c);
		if (new[i] == 0)
			return (ft_free(new, i));
		str = ft_strchr(str, (int)c);
		i++;
	}
	new[i] = 0;
	return (new);
}

/*int	main(void)
{
	char **new;
	const char	*s = "**aa***bbb***ccc**";
	char	c = '*';

	new = ft_split(s, c);
	size_t i;

	if(new != 0)
	{
		i = 0;
		while (new[i])
		{
			printf("%s\n", *ft_split(new[i], c));
			i++;
		}
	}
}*/
