/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 22:45:02 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:39:00 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

size_t	ft_ch(char const *s, char c)
{
	size_t	sign;
	size_t	i;

	i = 0;
	sign = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		sign++;
		i++;
	}
	return (sign);
}

char	**ft_split2(char const *s, char c, char **spr, int words)
{
	int	m;
	int	n;
	int	i;

	m = 0;
	i = 0;
	while (i < words)
	{
		if (!(spr[i] = (char *)malloc(sizeof(char) * (ft_ch(&s[m], c) + 1))))
		{
			words = 0;
			while (m > words)
				free(spr[words++]);
			free(spr);
			return (NULL);
		}
		n = 0;
		while (s[m] == c)
			m++;
		while (s[m] != c && s[m])
			spr[i][n++] = s[m++];
		spr[i++][n] = '\0';
	}
	spr[i] = NULL;
	return (spr);
}

char	**ft_split(char const *s, char c)
{
	char	**spr;
	int		words;

	if (!s || !c)
		return (NULL);
	words = ft_words(s, c);
	spr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!spr)
		return (NULL);
	return (ft_split2(s, c, spr, words));
}
