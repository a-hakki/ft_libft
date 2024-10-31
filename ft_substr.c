#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (char *)s;
	dst = (char *)malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return NULL;
	while (i < len)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
