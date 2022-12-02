/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01          by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/01          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0')
	{
		if (size <= sizeof(dest))
		{
			dest[a] = src[a];
		}
		a++;
	}
	return (*dest);
}

/*#include <stdio.h>
int main()
{
	char str[] = "42 Quebec";
	char dest[] = {};

	printf("Origin: %s\n", str);
	ft_strlcpy(dest, str, sizeof(str));
	printf("Copy: %s\n", dest);
	return 0;
}*/