/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power == 0)
		p = 1;
	else if (power < 0)
		p = 0;
	else
		p *= nb * ft_recursive_power(nb, --power);
	return (p);
}

/*#include <stdio.h>
int main()
{
	printf("%i\n", ft_recursive_power(3, -2));
	printf("%i\n", ft_recursive_power(3, 0));
	printf("%i\n", ft_recursive_power(10, 3));
}*/