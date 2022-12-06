/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str);
int	ft_is_numeric(char *str);
int ft_basedez(int n, int p);
int ft_transf(int *m);

int	ft_atoi(char *str)
{
	int	i;
	int j;
	int moins;
	int reponse;
	int input[];

	i = -1;
	j = -1;
	moins = 0;
	reponse = 1;
	while (str[++i])
	{
		if (ft_is_numeric(&str[i]))
		{
			input[++j] = (str[i] - '0');
		}
		if (str[i] == '-')
			moins++;
	}
	reponse = ft_transf(input);
	if (moins % 2 != 0)
		reponse *= -1;
	return reponse;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_numeric(char *str)
{
	if (*str < '0' || *str > '9')
		return (0);
	return (1);
}

int ft_basedez(int n, int p)
{
	if (p == 0)
		n = 1;
	else if ( p == 1)
		return (n);
	else
	{
		while (p > 1)
		{
			n *= 10;
			p--;
		}
	}
	return (n);
}

int ft_transf(int *m)
{
	int i;
	int r;

	i = -1;
	r = 0;
	while (m[ft_strlen(m) - i])
	{
		r = r + ft_basedez(m[ft_strlen(m) - i], (-1 * i));
		i--;
	}
	return (r);
}

#include <stdio.h>
int main()
{
	char a[] = "  ---+--+1234ab567";

	printf("%d", ft_atoi(a));
	return 0;
}