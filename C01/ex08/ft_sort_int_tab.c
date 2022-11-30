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
    int petit;

    i = 0;
    while (i < size)
    {
        petit = tab[i];
        if (*(tab + 1) < petit)
        {
            *(tab) = *(tab + 1);
            *(tab + 1) = petit;
            *(tab++);
            i++;
            size--;
        }
    }
}
