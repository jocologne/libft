NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra
OBJ := $(SRC:%.c=%.o)

# Arquivos .c a serem compilados 
SRC := 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_memcpy.c \
		ft_memmove.c

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
