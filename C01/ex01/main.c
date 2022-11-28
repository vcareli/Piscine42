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

void ft_ultimate_ft(int *********nbr);

int main()
{
    int valeur;
    int *a = &valeur;
    int **b = &a;
    int ***c = &b;
    int ****q = &c;
    int *****w = &q;
    int ******z = &w;
    int *******y = &z;
    int ********x = &y;

    ft_ultimate_ft(&x);
    printf("%d", valeur);
    return (0);
}
