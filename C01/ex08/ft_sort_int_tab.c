/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 29/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int tam;
    int petit;

    i = 0;
    tam = size - 1;
    while (i < tam)
    {
        petit = tab[i];
        if (*(tab + tam) > petit)
        {
            *(tab + i) = *(tab + tam);
            *(tab + tam) = petit;
            i++;
            tam--;
        }
    }
}
