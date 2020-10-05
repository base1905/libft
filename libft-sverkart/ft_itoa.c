/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 23:11:39 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:46:28 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_str(int n)
{
	size_t	m;

	m = 0;
	if (n == 0)
		n = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			n = n + 1;
		n = -n;
		m++;
	}
	while (n >= 10)
	{
		n = n / 10;
		m++;
	}
	return (m + 1);
}

char			*ft_itoa(int n)
{
	size_t			num;
	unsigned int	m;
	char			*spr;

	m = n;
	num = ft_str(n);
	spr = (char *)malloc(sizeof(char) * (num + 1));
	if (!spr)
		return (NULL);
	if (m == 0)
		spr[0] = 48;
	if (n < 0)
	{
		spr[0] = 45;
		m = n * (-1);
	}
	spr[num--] = '\0';
	while (m > 0)
	{
		spr[num--] = 48 + (m % 10);
		m /= 10;
	}
	return (spr);
}
