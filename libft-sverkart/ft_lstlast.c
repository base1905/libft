/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 23:53:39 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/18 23:54:16 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *past;

	past = lst;
	if (lst != 0)
	{
		while (past->next)
			past = past->next;
	}
	return (past);
}
