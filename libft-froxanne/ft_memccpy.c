/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:59:50 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/25 13:21:55 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int symb, size_t n)
{
	unsigned char	c;
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	c = (unsigned char)symb;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (d + i + 1);
		i++;
	}
	return (0);
}
