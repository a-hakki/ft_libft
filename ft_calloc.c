#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    size_t  i = 0;
    char    *arr = malloc(num * size);

    if (arr == NULL)
    {
        free(arr);
        return NULL;
    }
    while (i < num)
    {
        arr[i] = 0;
        i++;
    }
    return (arr);
}