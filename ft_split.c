#include "libft.h"

int ft_cou_wo(char const *str, char c)
{
    int i;
    int wo;

    i = 1;
    wo = 0;
    while (str[i])
    {
        if ((str[i] == c && str[i - 1] != c) || (str[i] != c && str[i + 1] == 0))
            wo = wo + 1;
        i++;
    }
    return (wo);
}

int *ft_int_arr(char const *sw, char c, int cw)
{
    int i;
    int lw;
    int j;
    int *arr = malloc(cw * sizeof(int));

    if (arr == NULL)
        return NULL;
    j = 0;
    i = 0;
    lw = 0;
    while (sw[i])
    {
        while ((sw[i] != c && sw[i] != 0))
        {
            lw++;
            i++;
        }
        if (lw)
        {
            arr[j] = lw;
            lw = 0;
            j++;
        }else
          i++;
    }
    return (arr);
}

char **ft_split(char const *s, char c)
{
    int cw = ft_cou_wo(s, c);
    int *arr = ft_int_arr(s, c, cw);
    char **str = malloc(sizeof(char *) * (cw + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    if(str == NULL || arr == NULL)
        return NULL;
    while (i < cw)
    {
        str[i] = malloc(arr[i] + 1);
        i++;
    }
    i = 0;
    while (s[i])
    {
        while ((s[i] != c && s[i] != 0))
            str[k][j++] = s[i++];
        if (j)
        {
            str[k][j] = '\0';
            k++;
        }
        j = 0;
        i++;
    }
    str[k] = '\0';

    return (str);
}

// int main()
// {
//     int i = 0;
//     int j = 0;
//     char strg[] = ",,,,,,,,,,,,,,,,,,,,,ab,d,o,,ahdad,,,";
//     char c = ',';
//     char **str = ft_split(strg, c);
//     while (str[i])
//     {
//         while(str[i][j])
//             printf("%c", str[i][j++]);
//         j = 0;
//         printf("\n");
//         i++;
//     }
// }