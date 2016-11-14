/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:52:17 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/08 13:52:21 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res_p;
	int		i;

	if (s)
	{
		res_p = (char *)malloc(ft_strlen(s) + 1);
		if (res_p == NULL)
			return (NULL);
		i = 0;
		i = (unsigned int)i;
		while (s[i])
		{
			res_p[i] = (*f)(i, ((char)s[i]));
			i++;
		}
		res_p[i] = '\0';
		return (res_p);
	}
	res_p = NULL;
	return (res_p);
}
