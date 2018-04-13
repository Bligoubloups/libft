/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:13:27 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:34:28 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		swap(t_list **previous, t_list **current)
{
	t_list		*tmp;

	tmp = (*current)->next;
	(*current)->next = *previous;
	*previous = *current;
	*current = tmp;
}

void			ft_lstrev(t_list **begin_list)
{
	t_list		*previous;

	previous = NULL;
	while (*begin_list)
		swap(&previous, begin_list);
	*begin_list = previous;
}
