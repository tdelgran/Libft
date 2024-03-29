/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:23:49 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/03 18:35:24 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	thelen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		titi;
	long	a;

	titi = thelen(n);
	str = malloc(sizeof(char) * (titi + 1));
	a = n;
	if (!str)
		return (0);
	if (a < 0)
	{
		str[0] = '-';
		a = -a;
	}
	if (a == 0)
		str[0] = '0';
	str[titi--] = '\0';
	while (a)
	{
		str[titi] = a % 10 + '0';
		titi--;
		a = a / 10;
	}
	return (str);
}
