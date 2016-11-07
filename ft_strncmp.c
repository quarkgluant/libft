/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:59:01 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/04 13:59:05 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const unsigned char *s1, const unsigned char *s2,
			size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s2[i] == 0 && s1[i] == 0)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
