#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int c;
       
	i = 0;
	c = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			c = 1;
		i++;	
	}
	if (c == 1)
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
