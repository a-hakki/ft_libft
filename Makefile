NAME = libft.a
surce = ft_bzero.c ft_isascii.c ft_memcpy.c ft_split.c ft_strlen.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
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

re: fclean $(NAME)