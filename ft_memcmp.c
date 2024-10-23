#include "libft.h"

int ft_memcmp(const char *s1, const char *s2, size_t n)
{
    size_t  i = 0;
    unsigned char   *st1 = (unsigned char *)s1;
    unsigned char   *st2 = (unsigned char *)s2;


    while (i < n)
    {
        if(st1[i] != st2[i])
            return (st1[i] - st2[i]);
        i++;
    }
    return (0);
}