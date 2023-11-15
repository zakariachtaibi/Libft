/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:54:26 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/15 16:03:43 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*extract_word(const char *s, size_t start, char c)
{
	size_t	wordlen;
	char	*word;

	wordlen = 0;
	while (s[start + wordlen] && s[start + wordlen] != c)
		wordlen++;
	word = malloc(wordlen + 1);
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, s + start, wordlen + 1);
	return (word);
}

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c) && ((str[i + 1] == c) || str[i + 1] == '\0'))
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

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			split[j] = extract_word(s, i, c);
			if (split[j++] == NULL)
				return (NULL);
			i += ft_strlen(split[j - 1]);
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
