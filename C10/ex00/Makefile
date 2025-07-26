NAME = ft_display_file

SOURCEFILE = main.c

SRCDIR = srcs

SOURCE = ${addprefix ${SRCDIR}/, ${SOURCEFILE}}

OBJECTS = ${SOURCES:.c=.o}

HDIR = includes

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs


${NAME}:
	${COMPILER} ${CFLAGS} ${SOURCE} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
