#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		i;
	int		file;
	char	tableau[1000];
	ssize_t	lecture;

	i = 0;
	if (argc == 1)
		write(1, "File name missing.", 18);
	else if (argc > 2)
		write(1, "Too many arguments.", 19);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (!file)
		{
			write(1, "Cannot read file.", 17);
			write(1, "\n", 1);
			return (0);
		}
		lecture = read(file, &tableau, 1000);
		if (lecture < 0)
		{
			write(1, "Cannot read file.", 17);
			write(1, "\n", 1);
			return (0);
		}
		else
		{
			while (tableau[i])
			{
				write(1, &tableau[i], 1);
				i++;
			}
		}
		close(file);
	}
	write(1, "\n", 1);
	return (0);
}
