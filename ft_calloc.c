/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:33:37 by ahakki            #+#    #+#             */
/*   Updated: 2024/10/24 13:33:39 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
