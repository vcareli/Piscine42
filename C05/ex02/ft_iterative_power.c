/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 1;
	p = 1;
	if (power == 0)
		p = 1;
	else if (power < 0)
		p = 0;
	else
	{
		while (i <= power)
		{
			p *= nb;
			i++;
		}
	}
	return (p);
}

/*#include <stdio.h>
int main(){
	printf("%i\n", ft_iterative_power(3, -2));
	printf("%i\n", ft_iterative_power(3, 0));
	printf("%i\n", ft_iterative_power(10, 3));
}*/