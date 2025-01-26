/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:40:11 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/26 19:31:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	handler(int signal, siginfo_t *info, void *context)
{
	static int				i = 0;
	static unsigned char	c = 0;

	(void) context;
	(void) info;
	if(signal == SIGUSR2)
		c = c << 1;
	else if(signal == SIGUSR1)
		c = (c << 1) | 0b00000001;
	i++;
	if(i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}
//sigaction equivalente ao signal com adição do siginfo.

int	main(void)
{
	struct sigaction	act;

	ft_printf("PID: %d\n", getpid());
	act.sa_flags = SA_RESTART | SA_SIGINFO;
	act.sa_sigaction = handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
