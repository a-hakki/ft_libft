#include "libft.h"

static char	ftb_strchr(const char *s, char ch)
{
	int	i = 0;

    while (s[i]) {
        if (s[i] == ch)
            return (1);
        i++;
    }
    return (0);
}

static size_t	ftb_strlen(const char *str)
{
    size_t len;
    len = 0;
    while (str[len])
        len++;
    return (len);
}

static char	*ftb_substr(char const *s, size_t start, size_t len)
{
        size_t  i;
        char    *dst;
        char    *src;

        src = (char *)s;
        i = 0;
        if (start >= ftb_strlen(src))
                len = 0;
        else if (len > ftb_strlen(src + start))
                len = ftb_strlen(src + start);
        dst = malloc(sizeof(char) * (len + 1));
        if (!dst)
                return NULL;
        while (i < len && src[i + start])
        {
                dst[i] = src[start + i];
                i++;
        }
        dst[i] = '\0';
        return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	while (s1[i] && ftb_strchr(set, s1[i]))
			i++;
	start = i;
	i = ftb_strlen(s1) - 1;
	while (i > start && ftb_strchr(set, s1[i]))
		i--;
	end = i + 1;
	return (ftb_substr(s1, start, end - start));


}
