/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:49:19 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/04 18:49:24 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = (char *)big;
	if (*little == 0)
		return (char *)(res);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
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
