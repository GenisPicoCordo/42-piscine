/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:57:53 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 19:32:01 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"

int	main(int argc, char *argv[])
{
	int		hints[16];
	int		board[4][4];
	char	*input;

	if (argc != 2)
	{
		write(1, "Error: Número incorrecto de argumentos.\n", 40);
		return (1);
	}
	input = argv[1];
	parse_hints(input, hints);
	if (hints[0] == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	initialize_board(board);
	if (find_solution(board, hints, 0, 0))
		display_board(board);
	else
		write(1, "Error\n", 6);
	return (0);
}
