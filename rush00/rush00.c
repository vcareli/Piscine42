/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_rect(int i, int j, int x, int y)
{
	if ((j == 0 && i == 0) || (j == 0 && i == x - 1)
		|| (j == y - 1 && i == 0) || (j == y - 1 && i == x - 1))
	{
		ft_putchar('o');
	}
	else if (j == 0 || j == y - 1)
	{
		ft_putchar('-');
	}
	else if (i == 0 || i == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	loop_thru(int i, int j, int x, int y)
{
	while (j < y)
	{
		while (i < x)
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
