/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:21:48 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/18 21:24:14 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t str, size_t size)
{
	unsigned char	*ptr;
	size_t			n;

	n = size * str;
	if (!(ptr = (unsigned char *)malloc(n)))
		return (NULL);
	ft_memset(ptr, 0, n);
	return ((void *)ptr);
}
