/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:31:28 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/13 12:33:56 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(int nb, char *base)
{
	int		tmp;
	int		base_len;
	int		result_len;
	char	*result;

	result_len = 0;
	tmp = nb;
	base_len = ft_strlen(base);
	while (tmp)
	{
		result_len += 1;
		tmp /= base_len;
	}
	if (!(result = (char *)malloc(sizeof(*result) * (result_len + 1))))
		return (NULL);
	result[result_len] = '\0';
	while (nb)
	{
		result_len--;
		result[result_len] = base[nb % base_len];
		nb /= base_len;
	}
	return (result);
}
