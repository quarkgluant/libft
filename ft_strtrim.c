/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:11:56 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/10 15:12:02 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		len;
	size_t	start;
	char	*s_p;

	len = 0;
	while (s[len] && (s[len] == '\t' || s[len] == ' ' || s[len] == '\n'))
		len++;
	start = len;
	if (start == (size_t)ft_strlen(s))
		return (ft_strnew(1));
	len = ft_strlen(s);
	len--;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	len++;
	if ((s_p = ft_strsub(s, start, len - start)))
		return (s_p);
	else
		return (NULL);
}
