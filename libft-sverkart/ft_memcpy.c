/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:35:18 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:41:39 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			n;

	if (!dest && !src)
		return (0);
	n = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 == s2)
		return (s1);
	while (len > n)
	{
		*s1++ = *s2++;
		n++;
	}
	return (dest);
}
