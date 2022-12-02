/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01          by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/01          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "oi vinicius Querido 42quebec te aguada!";
	int i = 0;
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/