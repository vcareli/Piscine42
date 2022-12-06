/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/06 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base)
{
	int v;
	int i;
	int negativo;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	negativo = 0;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negativo++;
	}
	v = 0;
	while (str[i] >= '0' && str[i] <= '9')
		v = v * 10 + str[i++] - '0';
	if (negativo % 2 != 0)
		v *= -1;
	return (v);
}

#include <stdio.h>
int main()
{
	char a[] = " ---+--+1234ab567";
    char b[20];

    ft_atoi_base(b, a);
	return 0;
}