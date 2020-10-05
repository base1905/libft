/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:00:43 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/15 12:51:54 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	src_len = (size_t)ft_strlen(src);
	if (size != 0 && src_len != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	if (src_len == 0)
		dst[i] = '\0';
	return (src_len);
}
