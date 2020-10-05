/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:59:54 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/04 04:43:29 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *arr, int symb, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (((char *)arr)[i] == symb)
			return (&(((char *)arr)[i]));
		i++;
	}
	return (0);
}
