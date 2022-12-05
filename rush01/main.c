/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "rush.h"

int	main(int argc, char **argv)
{
	int		size;
	char	**tab;

	if (argc != 2 || !((size = ft_get_size(argv[1]))))
	{
		ft_putstr("Error\n");
	}
	else if ((tab = ft_init(argv[1], size)))
	{
		if (ft_solve(tab, size))
			ft_print_tab(tab, size);
		else
			ft_putstr("Error\n");
		free(tab);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
