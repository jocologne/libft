/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:17:21 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/14 19:25:17 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize > srclen)
		ft_memcpy (dst, src, srclen + 1);
	else
		ft_memcpy(dst, src, srclen - 1);
		dst[dstsize - 1] = 0;
	return (srclen);
}
