/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sterrily <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:37:35 by sterrily          #+#    #+#             */
/*   Updated: 2020/05/25 22:33:47 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	result;
	int					sign;
	int					i;
	char				*s;

	s = (char *)str;
	result = 0;
	i = 0;
	while (*s == ' ' || *s == '\f' || *s == '\r' ||
		*s == '\n' || *s == '\v' || *s == '\t')
		s++;
	sign = ((*s == '-') ? -1 : 1);
	if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9' && i++ < 20)
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	if ((result > (unsigned long int)LONG_MAX || i >= 20) && sign == 1)
		return (-1);
	if ((result > (unsigned long int)LONG_MIN || i >= 20) && sign == -1)
		return (0);
	return (int)(sign * result);
}
