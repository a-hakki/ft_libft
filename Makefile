NAME = libft.a
surce = ft_*.c
object = $(surce:.c=.o)
cc = gcc
flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(object)
	@ar rc $(NAME) $(object)

clean:
	rm *.o

fclean: clean
	rm $(NAME)

test: all
	@$(cc) $(flags) main.c -L. -lft -o test_pro	
	@./test_pro

re: fclean all