/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:42:19 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 15:59:42 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list	*t1 = ft_lstnew("0");
	t_list	*t2 = ft_lstnew("0");
	t_list	*t3 = ft_lstnew("1");
	t1->next = t2;
	printf("%s\n%p\n", (char *)t1->content, t1->next);
	printf("%s\n%p\n", (char *)t2->content, t2->next);
	printf("%s\n%p\n", (char *)t3->content, t3->next);
	ft_lstadd_front(&t1, t3);
	printf("%s\n%p\n", (char *)t1->content, t1->next);
	printf("%s\n%p\n", (char *)t2->content, t2->next);
	printf("%s\n%p\n", (char *)t3->content, t3->next);
}*/
