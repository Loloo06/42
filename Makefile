# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:43:44 by lpollino          #+#    #+#              #
#    Updated: 2022/11/29 15:20:45 by lpollino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c \
	 ft_strrchr.c ft_strlcpy.c ft_strncmp.c  ft_strlcat.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c\
	 ft_memcmp.c \

CFLAGS = -Wall -Wextra -Werror -I.

OBJS = ${SRCS:.c=.o}

all: ${NAME}

%.o: %.c
	gcc ${CFLAGS} -o ${@} -c ${<:.o=.c}

fclean: clean
	rm -f ${NAME}

clean: 
	rm -f ${OBJS}

re: fclean all

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}


.PHONY: re clean fclean all