/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:31:25 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 16:55:39 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		power(int nb, int power)
{
	int		i;
	int		tmp;

	i = 1;
	tmp = nb;
	if (power == 0)
		return (1);
	while (i < power && i <= 46340)
	{
		nb *= tmp;
		i++;
	}
	return (nb);
}

static int		get_index(char *base, char c)
{
	int		i;

	i = 0;
	while (c != base[i])
		i++;
	return (i);
}

int				ft_atoi_base(char *nb, char *base)
{
	int		base_len;
	int		nb_len;
	int		result;
	int		i;

	base_len = ft_strlen(base);
	nb_len = ft_strlen(nb);
	i = 0;
	result = 0;
	nb_len--;
	while (nb_len >= 0)
	{
		result += get_index(base, nb[i]) * power(base_len, nb_len);
		i++;
		nb_len--;
	}
	return (result);
}
