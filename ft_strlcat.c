#include "libft.h"

static size_t	ftstrlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}


size_t ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	len = ftstrlen(src);
	len += ftstrlen(dst);
	if (n <= ftstrlen(dst)) 
		return (n + ftstrlen(src));
	i = ftstrlen(dst);
	while (i < (n - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
