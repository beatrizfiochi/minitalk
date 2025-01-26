/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:40:27 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/01/26 15:25:12 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	signal_sender(int pid, char *str)
{
	int	i;
	int	c;

	i = 0;
	while(*str)
	{
		c = *(str);
		while(i < 8)
		{
			if((c << i) & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(1000);
		}
		str++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		ft_printf("Error. Invalid number of arguments.\n");
		ft_printf("Format: ./client <PID> <message>\n");
		exit(1);
	}
	else
		signal_sender(ft_atoi(argv[1]), argv[2]);
	return (0);
}
