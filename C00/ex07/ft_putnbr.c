/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/06 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int v;
	int n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = (-1) * nb;
	}
	v = nb;
	i = 1;
	while (v > 9)
	{
		v /= 10;
		i *= 10;
	}
	while (i >= 1)
	{
		n = (nb / i);
		nb = nb % i;
		n = n + 48;
		ft_putchar(n);
		i /= 10;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	ft_putnbr(-32768);
	ft_putchar('\n');
	ft_putnbr(32767);
}