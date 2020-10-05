/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:01:28 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/19 00:02:05 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elm;
	t_list	*next;

	if (!lst || !del)
		return ;
	elm = *lst;
	while (elm)
	{
		next = elm->next;
		del(elm->content);
		free(elm);
		elm = next;
	}
	*lst = NULL;
}
