/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:18:34 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/13 18:18:38 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*begin;

	begin = (lst == NULL ? NULL : lst);
	if (lst)
	{
		ft_lstadd(&begin, lst);
		while (lst)
		{
			ft_lstadd(&begin, (*f)(lst));
			lst = lst->next;
		}
	}
	return (begin);
}
