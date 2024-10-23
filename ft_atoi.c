#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i = 0;
    int sing = 1;
    int n = 0;
    
    while( (nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
        if (nptr[i++] == '-')
            sing = -1;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        n = (n*10) + (nptr[i] - 48);
        i++;
    }
    return (n * sing);
}