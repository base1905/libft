/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/05 17:01:27 by sterrily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		countpcs(const char *s, const char c)
{
	int			count;

	count = 0;
	if (*s != c && *s++ != '\0')
		count++;
	while (*s != '\0')
	{
		if (*s != c && s[-1] == c)
			count++;
		s++;
	}
	return (count);
}

static size_t		ft_strclen(const char *s, const char c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void			*wipe(char ***array)
{
	int			i;

	i = 0;
	while (array[0][i])
	{
		free(array[0][i]);
		i++;
	}
	free(*array);
	return (NULL);
}

char				**ft_split(const char *s, char c)
{
	char		**array;
	size_t		i;
	size_t		pcs;
	size_t		len;

	if (s == NULL)
		return (NULL);
	pcs = countpcs(s, c);
	if ((array = (char **)malloc(sizeof(char*) * (pcs + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < pcs)
	{
		while (*s == c && *s != '\0')
			s++;
		len = ft_strclen(s, c);
		if ((array[i] = ft_substr(s, 0, len)) == NULL)
			return (wipe(&array));
		s += len;
		i++;
	}
	array[pcs] = NULL;
	return (array);
}
