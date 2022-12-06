/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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

/*#include <stdio.h>
int main()
{
	char a[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(a));
	return 0;
}*/