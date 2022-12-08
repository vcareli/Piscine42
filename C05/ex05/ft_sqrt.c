/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	s;
	int	n;
	int	demi;
	int	racine;

	s = 0;
	n = nb;
	demi = (s + n) / 2;
	if ((demi * demi <= n) && ((demi + 1) * (demi + 1) > n))
		racine = demi;
	if (demi * demi < n)
		racine = ft_sqrt(demi + 1);
	else
		racine = 0;
	return (racine);
}

#include <stdio.h>
int main()
{
	int n;
	printf("\nDigite um numero: ", ft_sqrt(9));
	scanf("%d", &n);
	printf("\nRaiz: %d\n", ft_sqrt(n));

}