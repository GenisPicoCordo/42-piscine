/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hints.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:57:15 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 20:39:25 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdio.h>

void	write_error(void)
{
	printf("Error\n");
}

int	validate_input(char *input)
{
	int	i;
	int	num_count;
	int	space_count;

	i = 0;
	num_count = 0;
	space_count = 0;
	while (input[i] != '\0')
	{
		if ((i % 2 == 0 && (input[i] < '1' || input[i] > '4'))
			|| (i % 2 == 1 && input[i] != ' '))
		{
			return (0);
		}
		if (i % 2 == 0)
			num_count++;
		else
			space_count++;
		i++;
	}
	if (num_count != 16 || space_count != 15 || i != 31)
	{
		return (0);
	}
	return (1);
}

int	parse_hints(char *input, int hints[16])
{
	int	i;

	if (!validate_input(input))
	{
		write_error ();
		return (1);
	}
	i = 0;
	while (i < 16)
	{
		hints[i] = input[i * 2] - '0';
		i++;
	}
	return (0);
}
