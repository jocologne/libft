/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:39:08 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/14 16:43:51 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	while (n > 0)
	{
		tmp_dest = (char *)dest;
		tmp_src = (char *)src;
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
		n--;
	}
	return (dest);
}
