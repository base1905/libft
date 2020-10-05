/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:59:07 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/25 13:09:19 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*dst;
	unsigned char	*d;
	size_t			i;

	if (!num)
		num = 1;
	if (!size)
		size = 1;
	if ((dst = malloc(num * size)))
	{
		i = 0;
		d = (unsigned char *)dst;
		while (i++ < size * num)
			*d++ = 0;
		return (dst);
	}
	return (0);
}
