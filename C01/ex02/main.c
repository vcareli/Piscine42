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

void    ft_swap(int *a, int *b);

int main()
{
    int a;
    int b;

    a = 10;
    b = 20;
    printf("a = %d\nb = %d", a, b);
    ft_swap(&a, &b);
    printf("\na = %d\nb = %d", a, b);
    return (0);
}
