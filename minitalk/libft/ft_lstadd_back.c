/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:36:32 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 16:53:26 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstlast;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lstlast = ft_lstlast(*lst);
	lstlast->next = new;
}

/*int	main(void)
{
	t_list	*t1 = ft_lstnew("1");
	t_list	*t2 = ft_lstnew("2");
	t_list	*t3 = ft_lstnew("3");
	t_list	*t4 = ft_lstnew("4");
	t1->next = t2;
	t2->next = t3;
	t_list *last1 = ft_lstlast(t1); //allocating the content of the last node
        printf("%s\n", (char *)last1->content);
	ft_lstadd_back(&t1, t4); //add new node
	t_list *last = ft_lstlast(t1); //allocating the content of the last node
	printf("%s", (char *)last->content);
}*/
