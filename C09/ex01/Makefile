
NAME = libft.a

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJS = $(addprefix srcs/, ${SRC:.c=.o})

FLAGS = -Wall -Werror -Wextra

.c.o:	gcc ${FLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rcs $@ $^

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re