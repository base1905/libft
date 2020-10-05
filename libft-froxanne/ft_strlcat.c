/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 14:54:20 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/12 13:06:52 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	char *d;

	d = dst;
	if (!size)
		return (ft_strlen(src));
	while (*d++)
		if (!--size)
			return (d - dst + ft_strlen(src));
	d--;
	while (--size)
		if (!(*d++ = *src++))
			return (d - dst - 1);
	*d = 0;
	return (d - dst + ft_strlen(src));
}
