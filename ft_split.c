/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:54:26 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/13 16:23:33 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c )&& ((str[i + 1] == c) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;
	size_t	wordlen;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			wordlen = 0;
			while (s[i + wordlen] && s[i + wordlen] != c)
				wordlen++;
			split[j] = malloc(wordlen + 1);
			ft_strlcpy(split[j], s + i, wordlen + 1);
			i += wordlen;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
