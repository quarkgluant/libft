/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:35:45 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/07 17:35:48 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		((char *)ptr)[i++] = 0;
	return ((void *)ptr);
}
