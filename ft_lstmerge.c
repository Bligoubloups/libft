/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:13:24 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:17:48 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstmerge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*start;

	start = *begin_list1;
	if (!(*begin_list1))
		*begin_list1 = begin_list2;
	else
	{
		while (start->next)
			start = start->next;
		start->next = begin_list2;
	}
}
