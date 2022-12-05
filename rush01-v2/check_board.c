/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkramer <mkramer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:50:54 by mkramer           #+#    #+#             */
/*   Updated: 2022/12/04 10:54:44 by mkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	check_col_up(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	cnt;

	i = 0;
	cnt = 1;
	max = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			cnt++;
		}
		i++;
	}
	if (cnt == num)
		return (1);
	return (0);
}

int	check_col_down(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	cnt;

	i = 3;
	cnt = 1;
	max = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			cnt++;
		}
		i--;
	}
	if (cnt == num)
		return (1);
	return (0);
}

int	check_row_left(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	cnt;

	i = 0;
	cnt = 1;
	max = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			cnt++;
		}
		i++;
	}
	if (cnt == num)
		return (1);
	return (0);
}

int	check_row_right(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	cnt;

	i = 3;
	cnt = 1;
	max = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			cnt++;
		}
		i--;
	}
	if (cnt == num)
		return (1);
	return (0);
}

int	check_board(int board[4][4], int *inner_num)
{
	int	i;

	i = 0;
	while (inner_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!check_col_up(board, i, inner_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!check_col_down(board, i - 4, inner_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!check_row_left(board, i - 8, inner_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!check_row_right(board, i - 12, inner_num[i]))
				return (0);
		i++;
	}
	return (1);
}
