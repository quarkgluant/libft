/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bignbig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:55:09 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/04 18:55:15 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = (char *)big;
	if (*little == 0)
		return (res);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (size_t)(i + j) < len)
			j++;
		if (little[j] == 0)
		{
			res += i;
			return (char *)(res);
		}
		i++;
	}
	return ((char *)NULL);
}
