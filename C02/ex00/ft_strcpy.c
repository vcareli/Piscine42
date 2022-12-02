/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30          by vinvieir          #+#    #+#             */
/*   Updated: 2022/11/30          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <unistd.h>
int main()
{
	char name[] = "42 Quebec";
	char copy[] = {};
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_strcpy(copy, name);
	i = 0;
	while (copy[i] != '\0')
	{
		write(1, &copy[i], 1);
		i++;
	}
}*/