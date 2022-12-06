/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*int main()
{
	char a[] = "42 Quebec !";

	ft_putstr(a);
	return 0;
}*/