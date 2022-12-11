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

int	*ft_range(int start, int end)
{
	int	*matrix;
	int i;
	int size;

	i = 0;
	size = (end - start);
	if (size < 0)
		size *= -1;
	size++;
	matrix = malloc(size * sizeof(int));
	if (!matrix)
		return (0);
	if (size == 1)
		matrix[0] = start;
	if (start < end)
	{
		while (i <= size)
		{
			matrix[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i <= size)
		{
			matrix[i] = start + i;
			i--;
		}
	}
	return (matrix);
}

#include <stdio.h>
int main(){
	int i = 0;
	int s = 0;
	int e = -2;

	while(i <= (e - s))
	{
		printf("%d ", *ft_range(s, e));
		i++;
	}
}