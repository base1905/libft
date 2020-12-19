/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <base1905@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 16:15:16 by arannara          #+#    #+#             */
/*   Updated: 2020/06/06 23:51:16 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_intlen(long int n)
{
	int		size;

	size = 1;
	if (n < 0)
		size++;
	while ((n /= 10))
		size++;
	return (size);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		x;
	char	buff;

	i = 0;
	x = 0;
	while (str[i])
		i++;
	i--;
	while (i >= x)
	{
		buff = str[x];
		str[x] = str[i];
		str[i] = buff;
		i--;
		x++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int			i;
	int			sign;
	char		*s;
	long int	nlong;

	nlong = n;
	if (!(s = (char *)malloc(sizeof(char) * (ft_intlen(nlong) + 1))))
		return (NULL);
	sign = nlong;
	i = 0;
	if (nlong == 0)
		s[i++] = '0';
	if (nlong < 0)
		nlong = -nlong;
	while (nlong > 0)
	{
		s[i++] = nlong % 10 + '0';
		nlong = nlong / 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (ft_strrev(s));
}

int main(void)
{
	printf("Test ft_itoa - %s\n", ft_itoa(219837544));
}

