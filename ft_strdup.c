/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:36 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/03 16:35:06 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int				i;
	char			*dup;
	unsigned int	size;

	size = ft_strlen(s1);
	if (!(dup = (char *)malloc(sizeof(*dup) * (size + 1))))
		return (0);
	dup[size] = '\0';
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
