# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagutin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 17:05:18 by dagutin           #+#    #+#              #
#    Updated: 2022/09/28 17:06:30 by dagutin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_putchar.c \
			 ft_swap.c \
			 ft_putstr.c \
			 ft_strlen.c \
			 ft_strcmp.c

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= libft.a

.c.o:
			gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
