rm -f libft.a
gcc -Wall -Werror -Wextra -c *.c
ar -rcs libft.a *.o
find . -name "*.o" -type f -delete