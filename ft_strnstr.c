#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	i;
	size_t	j;
	char	*st1;
	char	*st2;

	i = 0;
	j = 0;
	st1 = (char *)str;
	st2 = (char *)sub;
	if (!*st2)
		return (st1);
	while (st1[i] && i < n)
	{
		while (st1[i + j] == st2[j] && (i + j) < n)
		{
			j++;
			if (st2[j] == '\0')
				return (st1 + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
