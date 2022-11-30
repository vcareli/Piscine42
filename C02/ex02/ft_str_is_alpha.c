
int  ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 || str[i] < 91 || str[i] >= 97 || str[i] < 123)
        {
            return (1);
        }
        else
        {
            return(0);
        }
    }
}

int main()
{
    char str;

    str = "23453";
    if (&ft_str_is_alpha)
        write(1, "L", 1);
    else
        write(1, "NL", 2);
    return (0);
}