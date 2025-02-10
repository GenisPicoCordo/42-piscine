/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:33:31 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 14:49:43 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')); 
}

char rotate(char c)
{
	if(c != 'z' && c != 'Z')
		c += 1;
	else if(c == 'z')
		c = 'a';
	else if(c == 'Z')
		c = 'A';
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (ft_isalpha(c))
				c = rotate(c);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
