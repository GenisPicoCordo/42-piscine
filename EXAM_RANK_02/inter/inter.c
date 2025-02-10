/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:56:21 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 15:09:56 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	process_print(char *str, char c, int *count)
{
	str[*count] = c;
	*count += 1;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;
	char str[26];

	if (argc == 3)
	{
		i = 0;
		count = 0;
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && !ft_strchr(str, argv[1][i]))
					process_print(str, argv[1][i], &count);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
