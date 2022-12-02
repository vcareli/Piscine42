/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_print_memory.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30          by vinvieir          #+#    #+#             */
/*   Updated: 2022/11/30          by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	
	i = 0;
	while (addr[i] != '\0')
	{
		write(1, addr[i], 1);
	}
}

#include <unistd.h>
int main()
{
	char *str[]
	
	*str = "23sf453";
	ft_print_memory(&str);
	return (0);
}