/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 22:38:16 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 05:36:02 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	m;
	char	*spr;

	if (!s1 || !s2)
		return (0);
	n = ft_strlen(s1);
	m = ft_strlen(s2);
	if (!(spr = (char *)malloc(sizeof(char) * (n + m + 1))))
		return (0);
	n = 0;
	while (s1[n])
	{
		spr[n] = s1[n];
		n++;
	}
	m = 0;
	while (s2[m])
	{
		spr[n + m] = s2[m];
		m++;
	}
	spr[n + m] = '\0';
	return (spr);
}
