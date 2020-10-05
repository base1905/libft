/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:22:54 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:41:51 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			ind;

	ind = 0;
	str1 = (unsigned char *)arr1;
	str2 = (unsigned char *)arr2;
	while (len > ind)
	{
		if (str1[ind] != str2[ind])
			return (str1[ind] - str2[ind]);
		ind++;
	}
	return (0);
}
