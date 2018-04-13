/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:49 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/04 17:38:42 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little && !*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i] && little[j] == big[i])
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
