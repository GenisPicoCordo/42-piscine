/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:39:20 by pmelara-          #+#    #+#             */
/*   Updated: 2024/07/07 18:21:50 by pohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	str_to_int(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	if (str[0] == '-')
	{
		write(2, "[!] Negative numbers are not suppported!\n", 42);
		_exit(1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = s * 10 * n + str[i] - '0';
		else
		{
			write(2, "[!] You need to input 2 numbers!\n", 34);
			_exit(1);
		}
		i++;
	}
	return (n);
}

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;

	if (argc != 3)
		return (1);
	n1 = str_to_int(argv[1]);
	n2 = str_to_int(argv[2]);
	rush(n1, n2);
	return (0);
}
