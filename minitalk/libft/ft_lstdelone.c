/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:07:00 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 17:17:26 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*t1 = ft_lstnew("1");
	t_list	*t2 = ft_lstnew("2");
	t1->next = t2;
	printf("%s", (char *)t2->content);
	ft_lstdelone(t2, del);
	printf("%s", (char *)t2->content);
}*/
