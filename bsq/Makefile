
NAME = bsq

SRCS = src/main.c src/ft_file_load.c src/ft_is_valid.c src/ft_cherche_carre.c

OBJS = $(addprefix srcs/, ${SRCS:.c=.o})

SRC_HEADERS	= ft_bsq.h
HEADERS		:= $(addprefix includes/, ${SRC_HEADERS})

FLAGS = -Wall -Werror -Wextra -Ofast

all:	${NAME}

${NAME}:	${OBJS} ${HEADERS}
	gcc ${FLAGS} ${OBJS} ${SRCS} -o ${NAME}

.c.o:	${HEADERS}
		gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
