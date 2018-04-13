/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:41 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/03 16:35:01 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			size;
	unsigned int	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(*new) * (size + 1))))
		return (0);
	new[size] = '\0';
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}
