/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:59:59 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/15 13:08:42 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void *buf1, void *buf2, size_t count)
{
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	while (count--)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}
