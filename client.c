/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:40:27 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/28 19:50:33 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>
#include <stdbool.h>
#include <bits/types/siginfo_t.h>

static volatile bool g_received;

void	signal_sender(int pid, char *str)
{
	int	i;
	int	c;

	while(*str)
	{
		c = *(str);
		i = 0;
		while(i < 8)
		{
			g_received = false;
			if((c << i) & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			while (g_received ==  false)
				pause();
		}
		str++;
	}
	i = 0;
	while(i < 8)
	{
		g_received = false;
		kill(pid, SIGUSR2);
		i++;
		while (g_received == false)
			pause();
	}
}

void	handler(int signal)
{
	(void) signal;
	g_received = true;
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	act.sa_handler = handler;
	act.sa_flags = SA_SIGINFO;
	if(argc != 3)
	{
		ft_printf("Error. Invalid number of arguments.\n");
		ft_printf("Format: ./client <PID> <message>\n");
		exit(1);
	}
	else
	{
		sigaction(SIGUSR1, &act, NULL);
		signal_sender(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}
