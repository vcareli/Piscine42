/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"
#include <stdlib.h>

char	**ft_init(char *str, int size)
{
	char	**tab;
	int		x;
	int		y;

	y = -1;
	if (!(tab = malloc(size * sizeof(char*))))
		return (NULL);
	while (++y < size)
	{
		if (!(tab[y] = malloc((size + 4) * sizeof(char))))
			return (NULL);
		x = 0;
		while (x < size)
		{
			tab[y][x] = 0;
			x++;
		}
		x = 0;
		while (x < 4)
		{
			tab[y][size + x] = str[2 * (y + x * size)] - '0';
			x++;
		}
	}
	return (tab);
}
