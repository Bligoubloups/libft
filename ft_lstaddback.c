/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:05:47 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/04 15:53:53 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddback(t_list **alst, t_list *new)
{
	t_list		*current;

	if (alst && *alst)
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else if (alst)
		*alst = new;
}
