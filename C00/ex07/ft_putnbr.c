/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 21/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putnbr(int nb)
{
    int index;
    int value;
    int n;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = (-1) * nb;
    }
    value = nb;
    index = 1;

    while (value >= 10)
    {
        value /= 10;
        index *= 10;
    }
    while (index >=1)
    {
        n = nb / index;
        nb %= index;
        n = n + 48;
        write(1, &n, 1);
        index /= 10;
    }
}
