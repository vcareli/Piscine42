/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(unsigned int n, char *base, unsigned int size);
int		ft_inbase(char c, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || ft_inbase(base[i], base + i + 1) || (base[i] >= 9	&& base[i] <= 13))
			return;
	}
	if (i < 2)
		return;
	if (nbr < 0)
		return;
	else
		ft_print(nbr, base, i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
 {
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

int	ft_inbase(char c, char *base)
{
	while (*base)
	{
		if (c == *base++)
			return (1);
	}
	return (0);
}

int	main(){
	ft_putnbr_base(20, "01234567");
}