#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t  len = ft_strlen(src);
    size_t  i = 0;
    size_t  j = 0;

    while (dst[i] && i < n)
        i++;
    len += i;
    while (i < n - 1 && src[j])
        dst[i++] = src[j++];
    if (!src[j])
        dst[n - 1] = '\0';
    return (len);
}
