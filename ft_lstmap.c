/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:54:03 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/18 14:00:40 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_list;
	t_list		*begin_list;

	new_list = NULL;
	begin_list = new_list;
	while (lst && f)
	{
		if (!(new_list = f(ft_lstnew(lst->content, lst->content_size))))
			return (0);
		ft_lstaddback(&begin_list, new_list);
		lst = lst->next;
	}
	return (begin_list);
}
