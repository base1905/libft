/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:56:36 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/14 11:12:35 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num_is_neg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char			*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;
	char	buf[12];
	int		is_neg;

	is_neg = ft_num_is_neg(n);
	i = 0;
	while (1)
	{
		buf[i++] = is_neg * (n % 10) + '0';
		n /= 10;
		if (!n)
			break ;
	}
	if (!(str = (char *)malloc(sizeof(char) *
		((is_neg == -1 ? 1 : 0) + i + 1))))
		return (0);
	j = 0;
	if (is_neg == -1)
		str[j++] = '-';
	while (--i >= 0)
		str[j++] = buf[i];
	str[j] = '\0';
	return (str);
}
