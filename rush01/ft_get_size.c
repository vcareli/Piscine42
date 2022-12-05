/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_get_size(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' || str[i] <= '4')
			size++;
		else
			return (0);
		if (str[i] == ' ' && !str[++i])
			return (0);
		i++;
	}
	if (size != 16)
		return (0);
	return (ft_size(str, size));
}

int	ft_size(char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size / 4;
	while (i < size)
	{
		if (str[i] < '1' || str[i] > j + '0')
			return (0);
		i += 2;
	}
	return (j);
}
