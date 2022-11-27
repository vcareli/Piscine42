/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_rect(int i, int j, int x, int y)
{
	if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
	{
		if ((j != 0 && x == 1) || (j == 0 && i > 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('A');
		}
	}
	else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
	{
		ft_putchar('C');
	}
	else if ((j == 0 || j == y - 1) || (i == 0 || i == x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	loop_thru(int i, int j, int x, int y)
{
	while (j < y && y >= 0)
	{
		while (i < x && x >= 0)
		{
			print_rect(i, j, x, y);
			if (i == x - 1)
			{
				write(1, "\n", 1);
			}
			i++;
		}
		j++;
		i = 0;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x >= 0 && y >= 0)
	{
		i = 0;
		j = 0;
		loop_thru(i, j, x, y);
	}
}
