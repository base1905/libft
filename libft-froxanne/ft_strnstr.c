/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:00:59 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/14 11:14:20 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, char *str2, size_t n)
{
	size_t i;
	size_t j;
	size_t size_str2;

	i = 0;
	size_str2 = ft_strlen(str2);
	if (!size_str2)
		return (str1);
	while (i < n && str1[i])
	{
		j = 0;
		while (str2[j] == str1[i + j] && i + j < n && str1[i + j])
			j++;
		if (size_str2 == j)
			return ((char *)str1 + i);
		i++;
	}
	return (0);
}
