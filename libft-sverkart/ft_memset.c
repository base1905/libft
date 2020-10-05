/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:15:57 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:41:18 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			n;

	n = 0;
	str = (unsigned char *)dest;
	ch = (unsigned char)c;
	while (len > n)
	{
		*(str++) = ch;
		n++;
	}
	return (dest);
}
