/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:02:13 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/05 15:15:11 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_tolower(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
