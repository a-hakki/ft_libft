#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i = 0;
    //unsigned char   ch = (unsigned char )c;
    unsigned char   *st = (unsigned char *)s;

    while (st[i] && i < n)
    {
        if (st[i] == c)
            return (st + i);
        i++;
    }
    return (NULL);
    
}