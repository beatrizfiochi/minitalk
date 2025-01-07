/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:53:06 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 15:28:31 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (0);
	lstnew->content = content;
	lstnew->next = 0;
	return (lstnew);
}

/*int	main(void)
{
	char	*str = "Beatriz";
	t_list	*lstnew;

	lstnew = ft_lstnew((void *)str);
	printf("%s\n", (char *)lstnew->content);
	printf("%s", (char *)lstnew->next);
}*/
