/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:38:28 by ahakki            #+#    #+#             */
/*   Updated: 2024/10/24 13:42:44 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	st = (unsigned char *)s;
	i = 0;
	while (st[i] && i < n)
	{
		if (st[i] == c)
			return (st + i);
		i++;
	}
	return (NULL);
}
