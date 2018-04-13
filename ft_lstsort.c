/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:13:35 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:47:53 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		swap_elements(t_list *previous, t_list *swap_a, t_list *swap_b)
{
	if (previous)
		previous->next = previous->next->next;
	swap_a->next = swap_a->next->next;
	swap_b->next = swap_a;
}

void			ft_lstsort(t_list **begin_list, int (*cmp)())
{
	t_list		*previous;
	t_list		*current;
	t_list		*next;

	previous = NULL;
	current = *begin_list;
	while (current && current->next)
	{
		next = current->next;
		if ((*cmp)(current->content, next->content) > 0)
		{
			swap_elements(previous, current, next);
			if (!previous)
				*begin_list = next;
			current = *begin_list;
			previous = NULL;
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
