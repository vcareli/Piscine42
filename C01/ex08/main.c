/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 29/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void    ft_sort_int_tab(int *tab, int size);

int main()
{
    int a[10];
    int i = 0;
    time_t t;

    srand(time(&t));
    while (i < 10)
    {
        *(a + i) = (rand() % 100);
        i++;
    }
    printf("Original:\n");
    i = 0;
    while (i < 10)
    {
        printf("%d ", a[i]);
        i++;
    }
    ft_sort_int_tab(a, 10);
    printf("\nApres:\n");
    i = 0;
    while (i < 10)
    {
        printf("%d ", a[i]);
        i++;
    }
    return 0;
}
