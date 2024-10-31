#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t  i = 0;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
    while (i < n && (s1[i] || s2[i]))
    {
        if(s1[i] != s2[i] && (s1[i] || s2[i]))
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
