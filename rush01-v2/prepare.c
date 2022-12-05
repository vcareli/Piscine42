/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkramer <mkramer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:50:54 by mkramer           #+#    #+#             */
/*   Updated: 2022/12/04 11:36:55 by mkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "rush.h"

void	find_4_1(int board[4][4], int *input, int pos)
{
	int	fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && (pos >= 8 && pos <= 11))
		{
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		}
		fill = 4;
		if ((input[pos] == 4) && (pos >= 12 && pos <= 15))
		{
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		}
		pos++;
	}
}

void	find_4_0(int board[4][4], int *input)
{
	int	pos;
	int	fill;

	pos = -1;
	fill = -1;
	while ((input[++pos]) && pos < 8)
	{
		if ((input[pos] == 4) && (pos >= 0 && pos <= 3))
		{
			while (++fill < 4)
			{
				board[fill][pos] = fill + 1;
			}
		}
		fill = 4;
		if ((input[pos] == 4) && (pos >= 4 && pos <= 7))
		{
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		}
	}
	find_4_1(board, input, pos);
}

void	find_1(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	find_4_0(board, input);
}

int	start_board(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	find_1(board, input);
	if ((create(board, input)) == 1)
		print(board);
	else
		write(1, "\nERR - No Solution\n\n", 20);
	return (0);
}
