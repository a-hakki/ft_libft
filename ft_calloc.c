#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	i;
	char	*arr;

	arr = malloc(num * size);
	i = 0;
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < num)
		arr[i++] = 0;
	return (arr);
}
