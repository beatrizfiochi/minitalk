/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:06:43 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/20 16:14:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*t1 = ft_lstnew("1");
	t_list	*t2 = ft_lstnew("2");
	t_list	*t3 = ft_lstnew("3");
	t1->next = t2;
	t2->next = t3;
	printf("%d", ft_lstsize(t1));
}*/
