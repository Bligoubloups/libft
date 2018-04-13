/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:34:48 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/03 16:57:28 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (!(str[i]))
			return (word);
		while (str[i] && str[i] != c)
			i++;
		word++;
	}
	return (word);
}

static char		*put_word(const char *str, int index, char c)
{
	int		i;
	int		word;
	int		cara;
	char	*ret;

	i = 0;
	word = 0;
	while (word <= index)
	{
		cara = 0;
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			i++;
			cara++;
		}
		word++;
	}
	if (!(ret = (char *)malloc(sizeof(char) * (cara + 1))))
		return (0);
	ret[cara] = '\0';
	while (cara)
		ret[cara-- - 1] = str[i-- - 1];
	return (ret);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**tab;
	int		i;
	int		index;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	i = 0;
	index = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (0);
	tab[nb_words] = 0;
	while (i < nb_words)
	{
		tab[i] = put_word(s, i, c);
		i++;
	}
	return (tab);
}
