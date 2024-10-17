# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 15:02:52 by jcologne          #+#    #+#              #
#    Updated: 2024/10/17 05:46:06 by jcologne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC:= cc
CFLAGS:= -Wall -Wextra -Werror
NAME:= libft.a
HDR:= libft.h

SRC_FILES:= ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_itoa.c
			
OBJ_FILES := $(SRC_FILES:.c=.o)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
