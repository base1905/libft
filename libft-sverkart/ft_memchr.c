/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:19:39 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 13:50:30 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			n;

	str = (unsigned char *)arr;
	ch = (unsigned char)c;
	n = 0;
	while (len > n)
	{
		if (*(str) == ch)
			return (str);
		str++;
		n++;
	}
	return (NULL);
}
