/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:17:18 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/15 19:38:51 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpdst;
	char	*tmpsrc;
	size_t	i;

	tmpdst = (char *) dst;
	tmpsrc = (char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (tmpdst > tmpsrc)
	{
		while (len-- > 0)
			tmpdst[len] = tmpsrc[len];
	}
	else
	{
		while (i++ < len)
			tmpdst[i] = tmpsrc[i];
	}
	return (dst);
}
