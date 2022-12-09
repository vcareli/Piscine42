/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int var;
	int *buffer;

	i = -1;
	var = max - min;
	if ( min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc((var)*sizeof(int));
	if (!range)
	{
		*range = 0;
		return (0);
	}
	*range = buffer;
	while (++i < var)
		buffer[i] = (min + i);
	return (var);
}

#include <stdio.h>
int main(){
	int i = -1;
	int n1 = 5;
	int n2 = 15;
	int *tab;

	ft_ultimate_range(&tab, n1, n2);
	while (++i < (n2 - n1))
		printf("%d - ", tab[i]);
	return 0;
}