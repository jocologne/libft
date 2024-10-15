NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra

# Arquivos .c a serem compilados 
SRC := 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strchr.c

all: $(NAME)

teste:
	@$(CC) main.c $(SRC)
	@./a.out