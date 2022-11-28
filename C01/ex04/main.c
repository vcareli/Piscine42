/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 28/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int a;
    int b;

    a = 10;
    b = 2;
    printf("%d / %d = ", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("%d Mod %d", a, b);
    return (0);
}
