/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:45:25 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:34:35 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t len)
{
	size_t	i;
	size_t	m;

	if (!*s)
		return ((char *)str);
	i = 0;
	while (*str && i <= len)
	{
		if (*str == *s)
		{
			m = 0;
			while (str[m] != '\0' && i + m < len)
			{
				if (str[m] != s[m])
					break ;
				else if (s[m + 1] == '\0')
					return ((char *)str);
				m++;
			}
		}
		str++;
		i++;
	}
	return (NULL);
}
