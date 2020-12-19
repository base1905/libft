/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <base1905@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 17:32:10 by arannara          #+#    #+#             */
/*   Updated: 2020/06/05 18:35:31 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	p = malloc((sizeof(char) * size) + 1);
	if (!p)
		return (NULL);
	p[size + 1] = '\0';
	while (size)
	{ 
		p[size] = '\0';
		size--;
	}
	return (p);
}
