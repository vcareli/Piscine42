#include <stddef.h>
#include <unistd.h>

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
    char *name;
    char *copy;
    int i;

    i = 0;
    copy = NULL;
    name = "42 Quebec";
    while (name[i] != '\0')
    {
        write(1, &name[i], 1);
        i++;
    }
    write(1, "\n", 1);
    copy = ft_strcpy(copy, name);
    i = 0;
    while (copy[i] != '\0')
    {
        write(1, &copy[i], 1);
        i++;
    }
}