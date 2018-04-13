/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:33 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/03 16:35:09 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	unsigned int	i;
	unsigned int	len;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
			s[i++] = '\0';
	}
}
