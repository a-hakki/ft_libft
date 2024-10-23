#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  i = 0;
    size_t  len = 0;
    size_t  len2 = 0;
    char    *result;
    char    *str = (char *)s1;

    while (i < ft_strlen(str))
    {
        if (ft_strnstr(str + i, set, ft_strlen(set)))
            i = i + ft_strlen(set);
        else
        {
            len = i;
            i = ft_strlen(str);
        }
    }
    if (len == ft_strlen(str))
        return (str + len);
    while (i > len)
    {
        if (ft_strnstr(str + i - ft_strlen(set), set, ft_strlen(set)))
            i = i - ft_strlen(set);
        else
        {
            len2 = i;
            i = len;
        }
    }
    i = 0;
    result = malloc(sizeof(char *) * (len2 - len + 1));
    if (!result)
    {
        free(result);
        return (NULL);
    }
    while (len < len2)
        result[i++] = str[len++];
    result[i] = '\0';
    return (result);
}