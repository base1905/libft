/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 11:20:05 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/14 11:20:06 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_in_new;
	t_list	*new_list;
	t_list	*old_list;

	if (!lst)
		return (NULL);
	if (!(first_in_new = ft_lstnew((*f)(lst->content))))
		return (NULL);
	new_list = first_in_new;
	old_list = lst->next;
	while (old_list != NULL)
	{
		if (!(new_list->next = ft_lstnew((*f)(old_list->content))))
		{
			ft_lstclear(&first_in_new, del);
			return (NULL);
		}
		new_list = new_list->next;
		old_list = old_list->next;
	}
	return (first_in_new);
}
