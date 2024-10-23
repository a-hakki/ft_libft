#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sing;
	int	n;

	i = 0;
	sing = 1;
	n = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sing = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + (nptr[i] - 48);
		i++;
	}
	return (n * sing);
}
