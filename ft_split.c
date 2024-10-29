/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcologne <jcologne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:07:38 by jcologne          #+#    #+#             */
/*   Updated: 2024/10/29 01:22:23 by jcologne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char delimeter)
{
	size_t	num;
	int		word;

	num = 0;
	while (*s)
	{
		word = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			if (!word)
			{
				++num;
				word = 1;
			}
			++s;
		}
	}
	return (num);
}

static void	fillwords(char **string, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			string[i] = malloc(len + 1);
			ft_strlcpy(string[i], s - len, len + 1);
		}
		++i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[countwords(s, c)] = '\0';
	fillwords(result, s, c);
	return (result);
}
