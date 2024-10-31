#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i = 0;
	char  *src = (char *)s;
	char  *dst = malloc(sizeof(char *) * (len + 1));

    if (dst == NULL)
    {
        free(dst);
        return NULL;
    }
    while (i < len)
    {
        dst[i] = src[start + i];
	i++;
    }
    dst[i] = '\0';
    return (dst);
}
