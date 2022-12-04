#include "rush.h"

void	ft_print_tab(char **tab, int size)
{
	int		x;
	int		y;
	char	c;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			c = tab[y][x] + '0';
			ft_putchar(c);
			if (++x < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
