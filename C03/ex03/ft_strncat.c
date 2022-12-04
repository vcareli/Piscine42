/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_len(char *str);

char	ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	tam;

	i = 0;
	tam = ft_len(dest) - 1;
	while (i <= nb - 1)
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
	return (i + 1);
}

/*#include <stdio.h>
int main()
{
	char a[100] = "42 Q";
	char b[] = "uebec !";

	printf("String 1: %s\n", a);
	printf("String 2: %s\n", b);
	ft_strncat(a, b, 2);
	printf("String 1 Mod: %s\n", a);
	return 0;
}*/