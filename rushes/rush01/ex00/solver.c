/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:33:25 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 20:26:34 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	find_solution(int board[4][4], int hints[16], int row, int col)
{
	int	pos[2];
	int	next_pos[2];

	pos[0] = row;
	pos[1] = col;
	if (row == 4)
		return (validate_board(board, hints));
	get_next_position(pos, next_pos);
	return (av(board, hints, pos, next_pos));
}

void	get_next_position(int pos[2], int next_pos[2])
{
	int	row;
	int	col;
	int	next_row;
	int	next_col;

	row = pos[0];
	col = pos[1];
	if (col == 3)
	{
		next_row = row + 1;
		next_col = 0;
	}
	else
	{
		next_row = row;
		next_col = col + 1;
	}
	next_pos[0] = next_row;
	next_pos[1] = next_col;
}

int	av(int board[4][4], int hints[16], int pos[2], int next_pos[2])
{
	int	height;
	int	col;
	int	row;

	row = pos[0];
	col = pos[1];
	height = 1;
	while (height <= 4)
	{
		if (is_value_valid(board, row, col, height))
		{
			board[row][col] = height;
			if (find_solution(board, hints, next_pos[0], next_pos[1]))
				return (1);
			board[row][col] = 0;
		}
		height++;
	}
	return (0);
}
