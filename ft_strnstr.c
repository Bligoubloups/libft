/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:45 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/04 17:41:24 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little && !*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] && little[j] == big[i] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)(&big[i - j]));
		i -= j;
		i++;
	}
	return (NULL);
}
