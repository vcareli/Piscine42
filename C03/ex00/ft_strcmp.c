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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main()
{
	char org[] = "42 Quebecdfdfg dfgdfg";
	char des[] = "42 Quebece!fefef efefef dgeryuyk fgndfg";
	int t;

	t = ft_strcmp(org, des);
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