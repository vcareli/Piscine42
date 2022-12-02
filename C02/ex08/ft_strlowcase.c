/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strlowcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01          by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/01          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "oI VINICIUS cARELi!";
	int i = 0;
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/