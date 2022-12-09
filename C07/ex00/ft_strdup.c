/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*copia;
	int		i;

	i = -1;
	copia = ((char *)malloc(ft_strlen(src)*sizeof(char) + 1));
	if (!copia)
		return (0);
	while (src[++i])
		copia[i] = src[i];
	copia[i] = '\0';
	return (copia);
}

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total])
		total++;
	return (total);
}

/*#include <stdio.h>
int	main()
{
	char	*str;
	char	*allocated;

	str = "Hello World com malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}*/