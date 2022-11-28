/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 21/11/2022          by vinvieir          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_comb(void)
{
 	char    c;
    char    d;
    char    u;

	c = '0';
	while (c <= '9')
    {
	    d = c + 1;
		while (d <= '9'){
			u = d + 1;
			while (u <= '9'){
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (u < '9' || d < '8' || c < '7')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
