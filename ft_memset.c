#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

// int main()
// {
//     int str[50] = {5, 8, 9, 5, 6, 1, 1, 1, 1};
//     int i = 0;
//     ft_memset(str, -1, 5);
//     while (i < 10)
//         printf("%d\n", str[i++]);
//     i = 0;
//     memset(str, -1, 5);
//     while (i < 10)
//         printf("%d\n", str[i++]);
//     return 0;
// }
