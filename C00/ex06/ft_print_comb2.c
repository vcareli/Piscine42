/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_comb2(void)
{
    int column1, column2;
    int u, d;

    column1 = 0;
    while(column1 <= 99)
    {
        column2 = column1 + 1;
        while(column2 <=99)
        {
            d = (column1 / 10) + 48;
            u = (column1 % 10) + 48;
            write(1, &d, 1);
            write(1, &u, 1);
            write(1, " ", 1);
            d = (column2 / 10) + 48;
            u = (column2 % 10) + 48;
            write(1, &d, 1);
            write(1, &u, 1);
            if(column1 < 98 || column2 < 99)
                write(1, ", ", 2);
            column2++;
        }
        column1++;
    }
}
