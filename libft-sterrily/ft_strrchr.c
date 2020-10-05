/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char		*str;

	if ((char)c != '\0' && *s == '\0')
		return (NULL);
	str = (char *)s;
	while (*str != '\0')
		str++;
	while (str >= s)
	{
		if (*str == (unsigned char)c)
			return (str);
		str--;
	}
	return (NULL);
}
