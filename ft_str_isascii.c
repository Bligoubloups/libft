/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:01:59 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 15:07:41 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_isascii(char *str)
{
	while (*str)
	{
		if (!(0 <= *str && *str <= 127))
			return (0);
		str++;
	}
	return (1);
}