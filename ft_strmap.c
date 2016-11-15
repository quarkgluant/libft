/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:42:49 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/08 12:42:53 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res_p;
	int		i;

	if (s)
	{
		if (((res_p = (char *)malloc(ft_strlen(s) + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			res_p[i] = (*f)(s[i]);
			i++;
		}
		res_p[i] = '\0';
		return (res_p);
	}
	return (NULL);
}
