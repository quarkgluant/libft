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
#include <stdio.h>

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

/*char		**ft_strsplit(char *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	count;
	char	*s_p;
	size_t	j;
	char	**tab;

	nb_words = 0;
	nb_letters = 0;
	i = 0;
	j = 0;
	tab = NULL;
	s_p = s;
	count = 0;
	while (*s_p++)
		count++;
	while (i < count)
	{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			tab[i] = ft_strsub(s, start, end - start);;
	}
	tab[j] = 0;
	return (tab);
}*/
/*
char		**ft_strsplit(char const *s, char c)
{
	size_t	size;
	char	**tab;
	size_t	i;
	char	*s_p;
	size_t	j;

	i = 0;
	j = 0;
	tab = NULL;
	s_p = (char *)s;
	while (*s)
	{
		size = 0;
		if (*s != c)
		{
			while (*s != c)
			{
				s++;
				size++;
			}
		}
		else
		{
			j = 0;
			tab[i] = (char *)malloc(sizeof(char) * size + 1);
			// tab[i] = ft_strsub(s, s - s_p, size);
			if (tab[i] == NULL)
				return (NULL);
			while (j < size)
			{
				tab[i][j] = *s;
				j++;
				s++;
			}
			tab[i][j] = '\0';
			i++;
		}
		s++;
	}
	tab[i] = 0;
	return (tab);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		printf("chaine %s\n", argv[i]);
		printf("nombre de mots dans %s : %d\n", argv[i], ft_count_words(argv[i], '2'));
		i++;
	}
	return (0);
}
*/