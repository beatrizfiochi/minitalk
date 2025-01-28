/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:40:27 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/28 22:13:37 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>
#include <stdbool.h>
#include <bits/types/siginfo_t.h>

static volatile bool	g_received;

void	send_char(int pid, int c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		g_received = false;
		if ((c << bit) & 0b10000000)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		while (g_received == false)
			usleep(10);
	}
}

void	send_str(int pid, char *str)
{
	int	c;

	while (*str)
	{
		c = *(str);
		send_char(pid, c);
		str++;
	}
	send_char(pid, '\0');
}

void	handler(int signal, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	if (signal == SIGUSR1)
		g_received = true;
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	act = (struct sigaction){ 0 };
	act.sa_sigaction = handler;
	act.sa_flags = SA_SIGINFO;
	if (argc != 3)
	{
		ft_printf("Error. Invalid number of arguments.\n");
		ft_printf("Format: ./client <PID> <message>\n");
		exit(1);
	}
	else
	{
		sigaction(SIGUSR1, &act, NULL);
		send_str(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}
