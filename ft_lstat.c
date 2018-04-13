/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:12:55 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 17:17:19 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (NULL);
	while (nbr > 0)
	{
		begin_list = begin_list->next;
		if (!begin_list)
			return (NULL);
		nbr--;
	}
	return (begin_list);
}
