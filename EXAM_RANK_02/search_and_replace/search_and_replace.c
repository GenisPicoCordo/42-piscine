/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:58:26 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 14:12:22 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_check(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	char *str;

	i = 0;
	str = argv[1];
	if((argc != 4) || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		exit(1);
	}
	else if(!ft_check(str, argv[2][0]))
	{	
		while(str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
	{
		while(str[i])
		{
			if(str[i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

