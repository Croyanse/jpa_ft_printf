NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

lIBFT = libft/*.c

SRC = 	ft_printf.c\
		ft_wchar.c\
		ft_whex.c\
		ft_wint.c\
		ft_wptr.c\
		ft_wstr.c\
		ft_wuint.c\
		ft_itoa.c\
		ft_putstr.c\
		ft_strlen.c\
		ft_strdup.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(BONUS)
	ar rc $(NAME) $(BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
