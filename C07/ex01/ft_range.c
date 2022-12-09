/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *matrix;
	int i;

	i = -1;
	if ( min >= max)
		return (NULL);
	matrix = malloc((max - min)*sizeof(int));
	if (!matrix)
		return (NULL);
	while (++i < (max - min))
		matrix[i] = (min + i);
	return (matrix);
}

/*#include <stdio.h>
int main(){
	int i = -1;
	int n1 = 5;
	int n2 = 15;
	int *tab;

	tab = ft_range(n1, n2);
	while (++i < (n2 - n1))
		printf("%d - ", tab[i]);
	return 0;
}*/