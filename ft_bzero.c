// #include "libft.h"
#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}

// int main()
// {
//     char str[50] = "AHADED AHADEDD";
//     int i = 0;

//     ft_bzero(str, 1);
//     printf("%c", str[0]);  
//     return 0;
// }