/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_numbers(int num);

void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	while (col1 < 99)
	{
		col2 = col1 + 1;
		while (col2 < 100)
		{
			ft_print_numbers(col1);
			write(1, " ", 1);
			ft_print_numbers(col2);
			if (col1 != 98 || col2 != 99)
				write(1, ", ", 2);
			col2++;
		}
		col1++;
	}
}

void	ft_print_numbers(int num)
{
	int	d;
	int	u;

	d = (num / 10) + 48;
	u = (num % 10) + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

/*int main()
{
	ft_print_comb2();
	return 0;
}*/