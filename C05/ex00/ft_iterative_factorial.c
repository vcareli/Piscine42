/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	unsigned int f;

	i = -1;
	f = 1;
	if (nb < 0)
		f = 0;
	else if (nb == 0)
		f = 1;
	else
	{
		while (++i < nb)
			f *= (nb - i);
	}
	return (f);
}

#include <stdio.h>
int main(){
	int n = 31;

	printf("%d", ft_iterative_factorial(n));
}