/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putnbr(int nb)
{
	int i;
	int v;
	int n;
	//int e = -2.147.483.648;
	//int f = 2.147.483.647;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	v = nb;
	i = 1;
	if (nb >= 10)
	{
		v = nb / 10;
		i *= 10;
	}
	while (i >= 1)
	{
		n = nb / i;
		nb %= i;
		n = n + 48;
		write(1, &n, 1);
		i /= 10;
	}
}

int main()
{
	int a = 4;
    int b = -42;
	int d = 142;
	int e = -2147483648;
	int f = 2147483647;

	ft_putnbr(a);
    write(1, "\n", 1);
	ft_putnbr(b);
    write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
	ft_putnbr(e);
	write(1, "\n", 1);
	ft_putnbr(f);
	return 0;
}