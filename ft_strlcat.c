/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:29:41 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/06 18:29:45 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst_base;
	size_t	i;
	size_t	i_max;

	len_dst_base = ft_strlen(dst);
	i = 0;
	i_max = size - 1 - len_dst_base;
	while (src[i] && i < i_max)
	{
		dst[len_dst_base++] = ((char *)src)[i++];
	}
	dst[len_dst_base] = '\0';
	return (len_dst_base);
}

*/

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest_p;
	const char	*src_p;
	size_t		n;
	size_t		len_dst;

	dest_p = dst;
	src_p = src;
	n = size;
	while (n-- != 0 && *dest_p)
		dest_p++;
	len_dst = dest_p - dst;
	n = size - len_dst;
	if (n == 0)
		return (len_dst + ft_strlen(src_p));
	while (*src_p)
	{
		if (n != 1)
		{
			*dest_p++ = *src_p;
			n--;
		}
		src_p++;
	}
	*dest_p = '\0';
	return (len_dst + (src_p - src));
}
