/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_safe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkramer <mkramer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:50:54 by mkramer           #+#    #+#             */
/*   Updated: 2022/12/04 10:59:27 by mkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	find_zero(int board[4][4], int *row, int *col)
{
	*row = 0;
	*col = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (board[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

int	safe_col(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	safe_row(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	check_safe(int board[4][4], int row, int col, int num)
{
	if (((safe_row(board, row, num)) && (safe_col(board, col, num))
			&& (board[row][col] == 0)))
		return (1);
	return (0);
}

int	create(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((find_zero(board, &row, &col) == 0) && (check_board(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (check_safe(board, row, col, n))
		{
			board[row][col] = n;
			if (create(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
