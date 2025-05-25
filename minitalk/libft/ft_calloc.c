/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:34:14 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 15:20:21 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	count_size;

	count_size = nmemb * size;
	ptr = malloc(count_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count_size);
	return (ptr);
}

/*int	main(void)
{
	int	*str;
	int	n;

	n = 5;
	str = (int *)ft_calloc(n, sizeof(int));
	if (str == NULL) 
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	else 
		printf("Memory successfully allocated using ft_calloc.\n");

}*/
