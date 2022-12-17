/*
 * Assignment name  : ft_range
 * Expected files   : ft_range.c
 * Allowed functions: malloc
 *
 * Write the following function:
 *
 * int     *ft_range(int start, int end);
 *
 * It must allocate (with malloc()) an array of integers, fill it with consecutive
 * values that begin at start and end at end (Including start and end !), then
 * return a pointer to the first value of the array.
 *
 * Examples:
 *
 * - With (1, 3) you will return an array containing 1, 2 and 3.
 * - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
 * - With (0, 0) you will return an array containing 0.
 * - With (0, -3) you will return an array containing 0, -1, -2 and -3.
 * */
#include <stdlib.h>

int        ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*tab;
	int*d;

	size = ft_abs(end - start) + 1;
	d = (tab = malloc(size * sizeof(int)));
	if (!d)
		return (0);
	i = 0;
	if (size == 1)
		tab[0] = start;
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	//free(tab);
	return (tab);
}

/*#include <stdio.h>
int main(){
	int i = 0;
	int s = 0;
	int e = 5;
	int *tab;
	int size = ft_abs(e - s) + 1;

	tab = ft_range(s, e);
	while(i < size)
	{
		printf("%i \n", tab[i]);
		i++;
	}
	free(tab);
}*/