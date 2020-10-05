/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:57:27 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/26 17:13:37 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	char	*comb_str;

	i = 0;
	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(comb_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (0);
	while (s1_len--)
		comb_str[i++] = *s1++;
	while (s2_len--)
		comb_str[i++] = *s2++;
	comb_str[i] = '\0';
	return (comb_str);
}
