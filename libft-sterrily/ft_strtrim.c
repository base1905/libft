/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	last = ft_strlen(s1);
	while (last && ft_strchr(set, s1[last]))
		last--;
	s2 = ft_substr(s1, 0, last + 1);
	return (s2);
}
