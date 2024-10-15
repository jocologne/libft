CC := cc
CFLAGS := -Wall -Werror -Wextra
PROGRAM := libft.a

# Arquivos .c a serem compilados 
SRC := 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strchr.c

all: $(PROGRAM)

$(PROGRAM):
	@echo "Programa compilado"
	@touch $(PROGRAM)

teste:
	@$(CC) main.c $(SRC)
	@./a.out
	@rm a.out