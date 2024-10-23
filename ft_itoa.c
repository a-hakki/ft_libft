#include "libft.h"

char *ft_itoa(int n)
{
    int     i = 0;
    int     j = 0;
    int     t = n;
    char    *ch;

    if(t == 0)
        i++;
    while(t > 0)
    {
        i++;
        t /= 10;
    }
    ch = malloc(i + 1);
    if (!ch)
    {
        free(ch);
        return (NULL);
    }
    if(n == 0)
        ch[i] = '0';
    j = i - 1;
    while (j >= 0)
    {
        ch[j--] = (n % 10) + 48;
        n /= 10;
    }
    ch[i] = '\0';
    return (ch);
}