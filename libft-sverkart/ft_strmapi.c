/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 23:22:59 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 05:27:37 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*spr;
	size_t	i;

	if (!f)
		return (NULL);
	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (!(spr = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		spr[i] = f(i, s[i]);
		i++;
	}
	spr[i] = '\0';
	return (spr);
}
