/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:51:03 by ahakki            #+#    #+#             */
/*   Updated: 2024/10/24 20:16:59 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_cw(char const *str, char c)
{
	int	i;
	int	wo;

	i = 1;
	wo = 0;
	while (str[i])
	{
		if ((str[i] == c && str[i - 1] != c) \
				|| (str[i] != c && str[i + 1] == 0))
			wo = wo + 1;
		i++;
	}
	return (wo);
}

int	*ft_arr(char const *sw, char c, int *arr)
{
	int	i;
	int	j;
	int	lw;

	i = 0;
	j = 0;
	lw = 0;
	while (sw[i])
	{
		while (sw[i] != c && sw[i] != 0)
		{
			lw++;
			i++;
		}
		if (lw)
		{
			arr[j] = lw;
			lw = 0;
			j++;
		}
		else
			i++;
	}
	return (arr);
}

int	*ft_int_arr(char const *sw, char c, int cw)
{
	int	*arr;

	arr = (int *)malloc(cw * sizeof(int));
	if (arr == NULL)
		return (NULL);
	return (ft_arr(sw, c, arr));
}

char	**arr_cpy(char const *s, char **str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			str[k][j] = s[i];
			i++;
			j++;
		}
		if (j)
		{
			str[k][j] = '\0';
			k++;
		}
		i++;
	}
	str[k] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		*arr;
	int		i;

	i = 0;
	arr = (int *)malloc(ft_cw(s, c));
	str = (char **)malloc(sizeof(char *) * (ft_cw(s, c) + 1));
	if (str == NULL || arr == NULL)
		return (NULL);
	arr = ft_int_arr(s, c, ft_cw(s, c));
	while (i < ft_cw(s, c))
	{
		str[i] = (char *)malloc(arr[i] + 1);
		i++;
	}
	return (arr_cpy(s, str, c));
}
