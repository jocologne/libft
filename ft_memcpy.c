/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:14 by root              #+#    #+#             */
/*   Updated: 2024/10/14 16:33:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;

	while (n > 0)
	{
		tmp_dest = (char *)dest;
		tmp_src = (char *)src;
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
	}
	return (dest);
}
