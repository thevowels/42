# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aphyo-ht <aphyo-ht@student.42bangkok.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 06:52:22 by aphyo-ht          #+#    #+#              #
#    Updated: 2025/07/26 07:16:00 by aphyo-ht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = progf

MY_SOURCES = ft_putchar.c \
	     ft_putstr.c \
	     main.c

SRCS = ${addprefix srcs/, ${MY_SOURCES}}

RM = rm -f


MY_OBJECTS = $(SRCS:.c=.o)

CFLAGS += -Wall -Werror -Wextra

$(NAME): $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS)


all: $(NAME)

clean: 
	${RM} ${MY_OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re
