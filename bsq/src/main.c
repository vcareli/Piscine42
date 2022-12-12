/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_bsq.h"

static void	ft_bsq(char *path)
{
	t_map	mapa;
	t_carre	carre;
	int		y;

	if (!(mapa.content = ft_file_load(path)) || !ft_is_valid(&mapa))
		write(STDERR_FILENO, "map error\n", 10);
	else
	{
		ft_cherche_carre(&mapa, &carre);
		mapa.size.x++;
		y = 0;
		while (y < mapa.size.y)
			write(STDOUT_FILENO, mapa.matrix + mapa.size.x * y++, mapa.size.x);
	}
	free(mapa.content);
}

int	main(int argc, char **argv)
{
	char	c;
	int		i;

	c = '\n';
	i = 0;
	if (argc < 2)
	{
		ft_bsq(NULL);
		return (0);
	}
	while (++i < argc)
	{
		if (i > 1)
			write(STDOUT_FILENO, &c, 1);
		ft_bsq(argv[i]);
	}
	return (0);
}
