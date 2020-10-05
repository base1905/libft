/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;
	size_t	i;
	char	*hay;

	hay = (char *)haystack;
	if (*needle == '\0')
		return (hay);
	len = ft_strlen(needle);
	while (*hay && len <= n)
	{
		i = 0;
		while (hay[i] == needle[i] && hay[i] && needle[i] && i < n)
			i++;
		if (needle[i] == '\0')
			return (hay);
		hay++;
		n--;
	}
	return (NULL);
}
