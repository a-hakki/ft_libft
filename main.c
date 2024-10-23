#include "libft.h"
#include <fcntl.h>

int main()
{
    int fd = open("test_fd", O_WRONLY|O_APPEND);
    //int fd = 1;

    ft_putnbr_fd(49464, fd);
}