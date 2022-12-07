/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while (i <= n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				value = s1[i];
			else
				value = -(s2[i]);
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

	t = ft_strncmp(org, des, 10);
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