/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkramer <mkramer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:50:54 by mkramer           #+#    #+#             */
/*   Updated: 2022/12/04 10:57:27 by mkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
