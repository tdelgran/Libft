/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:16:18 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/23 14:46:29 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    sizemec(char const *s, unsigned int start, size_t len)
{
    size_t  titi;

    titi = ft_strlen(s) - start;
    while (titi > len)
        titi--;
    return (titi);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dest;
    unsigned int i;
    
    if (!s || !start)
        return (0);
    if (start >= ft_strlen(s))
        return (0);
    dest = 0;
    i = 0;
    dest = malloc(sizeof(char *) * (sizemec(s, start, len) + 1));
    while (s[i])
    {
        if (start == i)
        {
            while (len-- && s[i])
            {
                *dest = s[i];
                i++;
                dest++;
            }
            *dest = '\0';
            return (dest);
        }
        i++;
    }
    return (0);
}