/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	ptr_s = (unsigned char *)src;
	ptr_d = (unsigned char *)dst;
	i = 0;
	if (((size_t)(ptr_d - ptr_s) < len) && (ptr_d > ptr_s))
		while (len > 0)
		{
			ptr_d[len - 1] = ptr_s[len - 1];
			len--;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
