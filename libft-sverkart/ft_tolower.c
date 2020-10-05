/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:20:14 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/18 21:20:37 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int n)
{
	if (n >= 65 && n <= 90)
	{
		n += 32;
	}
	return (n);
}
