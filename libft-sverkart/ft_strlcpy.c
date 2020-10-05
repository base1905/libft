/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:32:05 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 05:32:36 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	m;
	size_t	n;
	int		i;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
		i++;
	if (size <= 0)
		return (i);
	n = size - 1;
	m = 0;
	while (n > 0 && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
		n--;
	}
	dest[m] = '\0';
	return (i);
}
