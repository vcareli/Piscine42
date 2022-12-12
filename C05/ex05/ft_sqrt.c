/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	long r;
	int	racine;

	i = 2;
	r = nb;
	if (r == 1 || r == 2)
		return (1);
	else if (r > 2)
		while (i * i <= r)
		{
			if (i * i == r)
				return (i);
			i++;
		}
	return (0);
}

/*#include <stdio.h>
int main()
{
	int n;
	printf("\nNumero: ");
	scanf("%d", &n);
	printf("Racine: %d\n\n", ft_sqrt(n));

}*/