/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:57:33 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/14 16:03:52 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mod_str;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(mod_str = ft_strdup(s)))
		return (0);
	while (mod_str[i])
	{
		mod_str[i] = f(i, mod_str[i]);
		i++;
	}
	return (mod_str);
}
