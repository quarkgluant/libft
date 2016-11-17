/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:01:13 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/17 16:01:32 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bubble_sort(int count, char **tab)
{
	int		j;
	char	*temp;

	j = 1;
	while (j < count)
	{
		if (ft_strcmp(tab[j], tab[j + 1]) > 0)
		{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			j = 1;
		}
		else
			j++;
	}
}
