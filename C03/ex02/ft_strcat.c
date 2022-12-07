/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_len(char *str);

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	tam;

	i = 0;
	tam = ft_len(dest);
	while (src[i] != '\0')
	{
		dest[tam] = src[i];
		tam++;
		i++;
	}
	return (*dest);
}

int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
int main()
{
	char a[50] = "42";
	char b[] = " Quebec !";

	printf("String 1: %s\n", a);
	printf("String 2: %s\n", b);
	ft_strcat(a, b);
	printf("String 1 Mod: %s\n", a);
	return 0;
}*/