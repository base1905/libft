/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:57:22 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/25 13:09:45 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_str_count(char const *s, char c)
{
	int		count;

	count = 0;
	while (1)
	{
		while (*s == c && *s)
			s++;
		if (!(*s))
			return (count + 1);
		count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char		**ft_split_clear(char **s, int size)
{
	int i;

	i = 0;
	while (i < size)
		free(s[i++]);
	free(s);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	int		i[2];
	int		tab_count[2];
	char	**tab;

	if (!s)
		return (0);
	tab_count[0] = ft_str_count(s, c);
	i[0] = 0;
	tab_count[1] = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * tab_count[0])))
		return (0);
	while (tab_count[1] < tab_count[0])
	{
		while (s[i[0]] == c)
			i[0]++;
		i[1] = i[0];
		while (s[i[0]] && s[i[0]] != c)
			i[0]++;
		if (!(tab[tab_count[1]] = (char *)malloc(sizeof(char) * (i[0] + 1))))
			return (ft_split_clear(tab, tab_count[0]));
		ft_strlcpy(tab[tab_count[1]++], &s[i[1]], i[0] - i[1] + 1);
	}
	tab[tab_count[0] - 1] = 0;
	return (tab);
}
