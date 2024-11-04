/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:14:11 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/04 16:14:13 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len1 = ft_strlen(s1);
    size_t  len2 = ft_strlen(s2);
    char    *result = malloc(len1 + len2 + 1);

    if (result == NULL)
    {
        free(result);
        return NULL;
    }
    //printf("before strlcpy : result = %s$\n", result);
    ft_strlcpy(result, s1, len1 + 1);
    //printf(" after strlcpy : %s \n", result);
    ft_strlcat(result, s2, len1 + len2 + 1);
    //printf(" after strlcat : %s \n", result);
    return (result);
}
