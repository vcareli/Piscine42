/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_solve(char **tab, int size)
{
	int i;

	i = -1;
	while (++i < size)
		if (tab[i][size] + tab[i][size + 1] > size + 1
			|| tab[i][size + 2] + tab[i][size + 3] > size + 1)
			return (0);
	return (ft_resolv(tab, 0, size));
}

int	ft_resolv(char **tab, int n, int size)
{
	int i;
	int x;
	int y;

	if (n == size * size)
		return (1);
	i = 0;
	x = n % size;
	y = n / size;
	while (++i <= size)
	{
		tab[y][x] = i;
		if (ft_is_valid_value(tab, x, y, size))
		{
			if (ft_resolv(tab, n + 1, size))
				return (1);
			tab[y][x] = 0;
		}
	}
	tab[y][x] = 0;
	return (0);
}

int	ft_is_valid_value(char **tab, int x, int y, int size)
{
	if (ft_is_duplicate(tab, x, y, size)
		|| ft_height_col(tab, x, 1, size) > tab[x][size] || (y == size - 1
		&& ft_height_col(tab, x, -1, size) != tab[x][size + 1])
		|| ft_height_row(tab, y, 1, size) > tab[y][size + 2] || (x == size - 1
		&& ft_height_row(tab, y, -1, size) != tab[y][size + 3]))
		return (0);
	return (1);
}


