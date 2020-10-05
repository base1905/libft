/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:41:40 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:33:48 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (str[index] == ch)
			return ((char *)(str) + index);
		index--;
	}
	return (NULL);
}
