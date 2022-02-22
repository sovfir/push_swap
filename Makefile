# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 13:51:29 by gjacinta          #+#    #+#              #
#    Updated: 2022/02/18 18:29:48 by gjacinta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
HEADER = push_swap.h
MAKEB = make bonus

SRC = src/push_swap.c\
	src/ft_index.c\
	src/ft_radix.c\
	src/ft_simplesort.c\
	src/ft_validcheck.c\
	src/push_functions.c\
	src/reverse_functions.c\
	src/rotate_functions.c\
	src/swap_functions.c\
	src/utils.c 

OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS} $(HEADER)
		@$(MAKEB) -C ./libft
		$(CC) ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJS}

fclean: clean
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
