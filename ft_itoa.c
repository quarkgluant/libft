/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcadiot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:26:03 by pcadiot           #+#    #+#             */
/*   Updated: 2016/11/10 15:26:11 by pcadiot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_itoa_size(int n)
{
	int		size;
	int		neg;

	size = 0;
	neg = 0;
	if (n < 0 && n > -2147483648)
	{
		neg = 1;
		size++;
		n = -n;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa_min_max(int n)
{
	char	*str;
	int		i;
	int		size;
	int		neg;

	size = ft_itoa_size(n);
	neg = (n < 0 ? 1 : 0);
	i = 1;
	if ((str = (char *)malloc(sizeof(char) * ft_itoa_size(n) + 1)) == NULL)
		return (NULL);
	n = 2147483647;
	while (n >= 1)
	{
		str[size - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	*str = '-';
	str[size - 1] = '8';
	str[size] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		size;
	int		neg;

	size = ft_itoa_size(n);
	neg = (n < 0 ? 1 : 0);
	i = 1;
	if (n == -2147483648)
		return (ft_itoa_min_max(-2147483648));
	if ((str = (char *)malloc(sizeof(char) * ft_itoa_size(n) + 1)) == NULL)
		return (NULL);
	n = (n < 0 ? -n : n);
	if (n == 0)
		return (str = "0");
	while (n >= 1)
	{
		str[size - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (neg)
		*str = '-';
	str[size] = '\0';
	return (str);
}
