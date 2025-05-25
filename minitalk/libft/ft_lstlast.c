/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:17:27 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 16:34:37 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*t1 = ft_lstnew("1");
	t_list	*t2 = ft_lstnew("2");
	t_list	*t3 = ft_lstnew("3");
	t_list	*t4 = ft_lstnew("4");
	t1->next = t2;
	t2->next = t3;
	t3->next = t4;
	t_list *last = ft_lstlast(t1);  //allocating the content of the last node
	printf("%s", (char *)last->content);
}*/
