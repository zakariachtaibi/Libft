/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:09:32 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/05 19:56:55 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	pt = malloc(nmemb * size);
	if (pt != NULL)
		ft_bzero(pt, nmemb * size);
	return (pt);
}
