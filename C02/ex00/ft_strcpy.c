#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char name;
    char *copy;


    name = "42 Quebec";
    printf("\n%s\n", name);
    copy = *ft_strcpy(copy, &name);
    printf("\n%s\n", copy);
}