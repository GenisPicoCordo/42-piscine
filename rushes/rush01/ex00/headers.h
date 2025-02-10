/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:56:03 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/14 20:41:06 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

int		validate_input(char *input);
int		find_solution(int board[4][4], int hints[16], int row, int col);
int		av(int board[4][4], int hints[16], int pos[2], int next_pos[2]);
int		is_value_valid(int board[4][4], int row, int col, int height);
int		validate_board(int board[4][4], int hints[16]);
int		check_col_up(int board[4][4], int hints[16], int col);
int		check_col_down(int board[4][4], int hints[16], int col);
int		check_row_left(int board[4][4], int hints[16], int row);
int		check_row_right(int board[4][4], int hints[16], int row);
int		parse_hints(char *input, int hints[16]);
void	display_board(int board[4][4]);
void	initialize_board(int board[4][4]);
void	get_next_position(int pos[2], int next_pos[2]);
void	write_error(void);

#endif
