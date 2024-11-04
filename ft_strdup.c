/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:12:53 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/04 16:12:57 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  len = ft_strlen(s);
    size_t  i = 0;
    char    *sor = (char *)s;
    char    *scopy = malloc(len + 1);
    if (scopy == NULL )
    {
        free(scopy);
        return NULL;
    }
    while (i < len)
    {
        scopy[i] = sor[i];
        i++;
    }
    scopy[i] = '\0';
    return (scopy);

}
