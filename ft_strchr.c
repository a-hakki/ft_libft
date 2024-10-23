#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int     i = 0;
    char    ch = (char)c;

    while (s[i]) {
        if (s[i] == ch)
            return (char *)(s + i);
        i++;
    }
    if (ch == '\0')
        return (char *)(s + i);
    return NULL;
}