/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:59:00 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 11:54:46 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	check_col_up(int board[4][4], int hints[16], int col)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 0;
	max_height = 0;
	visible_count = 0;
	while (i < 4)
	{
		if (board[i][col] > max_height)
		{
			max_height = board[i][col];
			visible_count++;
		}
		i++;
	}
	return (visible_count == hints[col]);
}

int	check_col_down(int board[4][4], int hints[16], int col)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 3;
	max_height = 0;
	visible_count = 0;
	while (i >= 0)
	{
		if (board[i][col] > max_height)
		{
			max_height = board[i][col];
			visible_count++;
		}
		i--;
	}
	return (visible_count == hints[4 + col]);
}

int	check_row_left(int board[4][4], int hints[16], int row)
{
	int	j;
	int	max_height;
	int	visible_count;

	j = 0;
	max_height = 0;
	visible_count = 0;
	while (j < 4)
	{
		if (board[row][j] > max_height)
		{
			max_height = board[row][j];
			visible_count++;
		}
		j++;
	}
	return (visible_count == hints[8 + row]);
}

int	check_row_right(int board[4][4], int hints[16], int row)
{
	int	j;
	int	max_height;
	int	visible_count;

	j = 3;
	max_height = 0;
	visible_count = 0;
	while (j >= 0)
	{
		if (board[row][j] > max_height)
		{
			max_height = board[row][j];
			visible_count++;
		}
		j--;
	}
	return (visible_count == hints[12 + row]);
}
