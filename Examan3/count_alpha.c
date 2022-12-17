/* * *
 * Assignment name  : count_alpha
 * Expected files   : count_alpha.c
 * Allowed functions: write, printf
 *
 * Écrire un programme count_alpha qui prend une chaîne et affiche le nombre d'occurences
 * de ses caractères alphabétiques. Les autres caractères ne sont pas comptés. L'ordre est l'ordre d'apparition dans la chaîne.
 * L'affichage doit être terminé par un newline.
 *
 * Le format est dans les exemples.
 *
 * Si le nombre d'arguments n'est pas 1, afficher juste un newline.
 *
 * Exemples :
 * $> ./count_alpha abbcc
 * 1a, 2b, 2c
 * $> ./count_alpha "abbcc"
 * 1a, 2b, 2c
 * $> ./count_alpha "abbcc" "dddeef" | cat -e
 * $
 * $> ./count_alpha "My Hyze 47y 7." | cat -e
 * 1m, 3y, 1h, 1z, 1e$
 * $> ./count_alpha "" | cat -e
 * $
 * * */
#include <stdio.h>

int	ft_alfa(char *str)
{
	int v;
	//int i;

	v = 1;
	//i = 0;
	if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
	{
		v = 0;
	}
	// if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
	// {
	// 	v = 1;
	// }
	return (v);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char ft_convert_lowcase(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		str[0] = str[0] + 32;
	else
		;
	return (str);
}


int	main(int argc, char **argv)
{
	int		i;
	char	actuel;

	i = -1;
	if (argc == 2)
	{
		while (actuel == argv[1][++i])
			ft_count_aplha()
	}
	printf("\n");
}
