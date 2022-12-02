/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strcapitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01          by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/01          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int minusc(char c);
int maiusc(char c);
int num(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((maiusc(str[i]) || minusc(str[i]) || num(str[i])) && c == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				*(str + i) -= 32;
			c = 1;
		}
		else if ((maiusc(str[i]) || minusc(str[i]) || num(str[i])) && c == 1)
		{
			if (maiusc(str[i]))
				*(str + i) += 32;
		}
		else
			c = 0;
		i++;
	}
	return (str);
}

int maiusc(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int minusc(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int num(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int i = 0;
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/