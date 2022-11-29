/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 28/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int i;
    int tam;

    i = 0;
    tam = size - 1;
    while (i < tam)
    {
        aux = tab[i];
        *(tab + i) = *(tab + tam);
        *(tab + tam) = aux;
        i++;
        tam--;
    }
}
