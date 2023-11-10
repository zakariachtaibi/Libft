/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:54:26 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/07 17:09:02 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **split;
	size_t count_w;
	size_t i;
	size_t j;
	const char *start;
	size_t len;

	i = 0;
	if (!s)
		return (NULL);
	count_w = count_words(s, c);
	split = (char **)malloc(sizeof(char) * (count_w + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			len = s - start;
			split[i] = strdup(start);
			j = 0;
			if (!split[i])
			{
				while (j < i)
				{
					free(split[j]);
					j++;
				}
				free(split);
				return (NULL);
			}
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}