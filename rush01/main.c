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
