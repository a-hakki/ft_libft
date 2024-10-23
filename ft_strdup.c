#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  len = ft_strlen(s);
    size_t  i = 0;
    char    *sor = (char *)s;
    char    *scopy = malloc(len + 1);
    if (scopy == NULL )
    {
        free(scopy);
        return NULL;
    }
    while (i < len)
    {
        scopy[i] = sor[i];
        i++;
    }
    scopy[i] = '\0';
    return (scopy);

}
