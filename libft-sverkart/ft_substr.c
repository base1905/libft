/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 22:35:05 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 05:29:58 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub;
	size_t	m;
	char	*spr;

	if (!s)
		return (NULL);
	m = 0;
	sub = ft_strlen(s);
	if (sub < start)
		len = 0;
	else
	{
		sub = sub - start;
		if (sub < len)
			len = sub;
	}
	if (!(spr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (m < len)
	{
		spr[m] = s[m + start];
		m++;
	}
	spr[m] = '\0';
	return (spr);
}
