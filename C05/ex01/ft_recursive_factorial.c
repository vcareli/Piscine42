/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		f = 0;
	else if (nb == 0 || nb == 1)
		f = 1;
	else
		f *= nb * ft_recursive_factorial(nb - 1);
	return (f);
}

/*#include <stdio.h>
int main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/