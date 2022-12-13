/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strlen(char *str)
{
    int total;
    
    total = 0;
    while (str[total])
        total++;
    return (total);
}

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

int	ft_flen(char **strings, int size, int sep_length)
{
	int	flen;
	int	i;

	flen = 0;
	i = 0;
	while (i < size)
	{
		flen += ft_strlen(strings[i]);
		flen += sep_length;
		i++;
	}
	flen -= sep_length;
	return (flen);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*s;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_flen(strs, size, ft_strlen(sep));
    d = (s = (char *)malloc((len + 1) * (sizeof(char))));
    if (!d)
        return (0);
    while (i < size)
    {
        ft_strcpy(d, strs[i]);
        d += ft_strlen(strs[i]);
        if (i < size - 1)
        {
            ft_strcpy(d, sep);
            d += ft_strlen(sep);
        }
        i++;
    }
    *d = '\0';
    return (s);
}

/*#include <stdio.h>
int main()
{
	int		i;
	char	**strs;
	char	*sep;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = " oi";
	strs[1] = "sdfswd";
	strs[2] = "vinny";
	sep = "-";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
	free(result);
}*/