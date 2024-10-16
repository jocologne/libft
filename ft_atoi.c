/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:59:25 by wsl               #+#    #+#             */
/*   Updated: 2024/10/17 05:30:32 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;
	int	index;

	index = 0;
	sign = 1;
	num = 0;
	if (nptr[index] == '\0')
		return (0);
	while (nptr[index] <= 32)
		index++;
	if (nptr[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (nptr[index] == '+')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		num = (num * 10) + (nptr[index]) - 48;
		index++;
	}
	return (num * sign);
}
