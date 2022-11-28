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

void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a;
    int b;
    int divisao;
    int resto;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &divisao, &resto);
    printf("%d/%d = %d Mod %d", a, b, divisao, resto);
    return (0);
}
