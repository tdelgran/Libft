/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:38 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/30 10:19:02 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;

	if (!s1)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i)
		i--;
	dst = ft_substr((char *)s1, 0, i + 1);
	return (dst);
}
