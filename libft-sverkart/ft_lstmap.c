/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 04:53:57 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 13:50:15 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *other;

	if (lst && (new = ft_lstnew(f(lst->content))))
	{
		other = new;
		lst = lst->next;
		while (lst)
		{
			if (!(other->next = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			other = other->next;
			lst = lst->next;
		}
		other->next = NULL;
		return (new);
	}
	return (NULL);
}
