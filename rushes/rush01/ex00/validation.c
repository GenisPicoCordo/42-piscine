/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:58:31 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 11:44:47 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	is_value_valid(int board[4][4], int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == height || board[i][col] == height)
			return (0);
		i++;
	}
	return (1);
}

int	validate_board(int board[4][4], int hints[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_left(board, hints, i)
			|| !check_row_right(board, hints, i))
			return (0);
		if (!check_col_up(board, hints, i) || !check_col_down(board, hints, i))
			return (0);
		i++;
	}
	return (1);
}
