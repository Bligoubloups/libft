/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:13:08 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:20:49 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelif(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*previous;
	t_list		*next;
	t_list		*current;

	current = *begin_list;
	previous = NULL;
	while (current)
	{
		next = current->next;
		if (cmp(current->content, data_ref) == 0)
		{
			free(current);
			current = next;
			if (previous)
				previous->next = current;
			else
				*begin_list = current;
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
