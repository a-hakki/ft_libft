#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src,size_t n)
{
    size_t i = n - 1;
    size_t len = ft_strlen(src);
    char    *s = (char *)src;

    if (n == 0)
        return len; // If n is 0, we cannot copy anything
    //if (sizeof(dst) < n)
        //return len;
    while (i < n)
    {
        dst[i] = s[i];
        i--;
    }
    dst[n - 1] = '\0';
    return (len);
}