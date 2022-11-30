#include <unistd.h>
#include <stddef.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[n+1] = '\0';
    return (dest);
}

int main()
{
    char *name;
    char *copy;
    int q;
    int i;

    i = 0;
    q = 3;
    copy = NULL;
    name = "42 Quebec";
    while (name[i] != '\0')
    {
        write(1, &name[i], 1);
        i++;
    }
    write(1, "\n", 1);
    copy = ft_strncpy(copy, name, q);
    i = 0;
    while (i <= q)
    {
        write(1, &copy[i], 1);
        i++;
    }
}