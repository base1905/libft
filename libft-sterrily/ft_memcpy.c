/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int dst_address;
	unsigned long int src_address;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_address = (long int)dst;
	src_address = (long int)src;
	while (n > 0)
	{
		((char *)dst_address)[0] = ((char *)src_address)[0];
		dst_address += 1;
		src_address += 1;
		n -= 1;
	}
	return (dst);
}
