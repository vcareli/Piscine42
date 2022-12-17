NAME = ft_display_file

SRCS = main.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}:${OBJS}
		gcc ${FLAGS} ${SRCS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean