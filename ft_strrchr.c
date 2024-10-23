#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int     i = 0;
    char    ch = (char)c;

    while (s[i])
        i++;
    if (ch == '\0')
        return (char *)(s + i);
    while (i >= 0) {
        if (s[i] == ch)
            return (char *)(s + i);
        i--;
    }
    return NULL;
}