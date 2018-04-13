/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiterif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:13:15 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:21:16 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiterif(t_list *begin_list, void (*f)(void *)
		, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list->content, data_ref) == 0)
			f(begin_list->content);
		begin_list = begin_list->next;
	}
}
