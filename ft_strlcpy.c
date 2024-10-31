#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src,size_t n)
{
    size_t i;
    size_t len;
    char    *s;

    i = 0;
    len = ft_strlen(src);
    s = (char*)src;
    if (n == 0)
        return len; // If n is 0, we cannot copy anything
    while (i < (n - 1) && s[i])
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
