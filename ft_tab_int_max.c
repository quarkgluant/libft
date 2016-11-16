/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_int_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:19:44 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/16 16:19:49 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tab_int_max(int *tab, int size)
{
	int		i;
	int		max;

	i = 0;
	max = 0;
	while (i < size)
	{
		max = max > tab[i] ? max : tab[i];
		i++;
	}
	return (max);
}
