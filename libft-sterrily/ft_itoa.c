/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_len_nbr(unsigned int nbr)
{
	int			i;

	i = 1;
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	size_t			len;
	int				sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb = (unsigned int)-n;
	}
	else
		nb = (unsigned int)n;
	len = ft_len_nbr(nb) + sign;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len-- > (unsigned int)sign)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		str[len] = '-';
	return (str);
}
