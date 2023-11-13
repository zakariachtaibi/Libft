/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:02:17 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/04 13:41:15 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*sr;

	i = 0;
	sr = (unsigned char *)s;
	while (i < n)
	{
		if (sr[i] == (unsigned char)c)
			return ((void *)(sr + i));
		i++;
	}
	return (NULL);
}
