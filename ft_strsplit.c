/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:37:08 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/09 14:37:11 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	size_t	start;
	size_t	end;
	int		i;
	size_t	nb_words;
	char	**tab;

	nb_words = 0;
	tab = NULL;
	i = 0;
	if ((tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				tab[nb_words++] = ft_strsub(s, start, end - start);
		}
		tab[nb_words] = 0;
	}
	return (tab);
}
