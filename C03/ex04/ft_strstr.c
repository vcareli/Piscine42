/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
	}
}

/*#include <stdio.h>
int main()
{
	char a[] = "42 Quebec !";
	char b[] = "u";

	printf("String: %s\n", a);
	printf("Cherche: %s\n", b);
	printf(ft_strstr(a, b));
	return 0;
}*/