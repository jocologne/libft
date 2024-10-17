/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:10:46 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/17 01:41:34 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	char	*ts1;
	char	*ts2;

	ts1 = (char *)s1;
	ts2 = (char *)s2;
	i = 0;
	if (*ts2 == '\0')
		return (ts1);
	while (i < len)
	{
		if (!ft_strncmp(ts1 + i, ts2, ft_strlen(ts2)))
		{
			return (ts1 + i);
		}
		i++;
	}
	return (NULL);
}
