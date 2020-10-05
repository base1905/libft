/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:52:00 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:41:28 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				n;
	unsigned char		*str;
	unsigned const char	*s;

	if (!dest && !src)
		return (NULL);
	n = 0;
	str = dest;
	s = src;
	if (str < s)
	{
		while (len > n)
		{
			str[n] = s[n];
			n++;
		}
	}
	else
	{
		while (len-- > n)
			str[len] = s[len];
	}
	return (dest);
}
