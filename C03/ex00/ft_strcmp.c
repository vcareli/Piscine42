/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	test(char *str1, char *str2);

int	ft_strcmp(char *s1, char *s2)
{
	int	v;

	v = 0;
	if (test(s1, s2) != 0)
		v = test(s1, s2);
	else
		v = test(s2, s1);
	return (v);
}

int	test(char *str1, char *str2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (i <= q)
	{
		if (str1[i] != '\0')
		{
			if (str1[i] > str2[i])
				value = str1[i];
			else
				value = -(str2[i]);
		}
		i++;
	}
	return (value);
}

/*#include <stdio.h>
int main()
{
	char org[] = "42 Quebecdfdfg dfgdfg";
	char des[] = "42 Quebece!fefef efefef dgeryuyk fgndfg";
	int t;

	t = ft_strcmp(org, des3);
	if (t == 0)
	{
		printf("==");
		printf("%d", t);
	}
	else
	{
		printf("<>");
		printf("%d", t);
	}
	return 0;
}*/