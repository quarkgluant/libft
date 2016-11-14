/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:03:14 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/08 14:03:18 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	int		i;
	int		len_s1;
	int		len_s2;

	if (s1 && s2)
	{
		i = 0;
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		if (len_s1 != len_s2)
			return (0);
		while (i < len_s1)
		{
			if (*s1 != *s2)
				return (0);
			i++;
			s1++;
			s2++;
		}
		return (1);
	}
	return (0);
}
