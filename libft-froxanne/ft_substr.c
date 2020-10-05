/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:57:46 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/25 13:23:17 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		i;
	size_t				str_len;

	if (!str)
		return (0);
	i = 0;
	str_len = (size_t)ft_strlen(str);
	if (start > str_len || !len)
		return (ft_strdup(""));
	while (i < len && str[i + start])
		i++;
	if (!(substr = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = -1;
	while (++i < len && str[i + start])
		substr[i] = str[start + i];
	substr[i] = 0;
	return (substr);
}
