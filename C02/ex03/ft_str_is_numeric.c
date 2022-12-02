/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30          by vinvieir          #+#    #+#             */
/*   Updated: 2022/11/30          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

/*#include <unistd.h>
int main()
{
	char str[] = "23sf453";

	if (ft_str_is_numeric(str))
		write(1, "+", 1);
	else
		write(1, "-", 2);
	return (0);
}*/