/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size && *dest)
	{
		dest++;
		if (i == size)
			return (i + (unsigned int)ft_len(src));
		j = -1;
		while (src[++j])
		{
			if (j < size - i - 1)
				*dest++ = src[j];
		}
		*dest = '\0';
	}
	return (i + j);
}

int ft_len(char *str)
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
	char a[10] = "42 Q";
	char b[] = "uebec !";

	printf("String 1: %s\n", a);
	printf("String 2: %s\n", b);
	printf("String 1 Mod: %s\n", a);
	return 0;
}*/