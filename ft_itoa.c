/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 05:19:54 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/17 05:54:32 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	long	num;
	int		len;

	num = n;
	len = 0;
	if (num <= 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	len = ft_numlen(n);
	str = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > 0)
	{
		len--;
		if (str[len] != '-')
			str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
