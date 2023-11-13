/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:24:49 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/12 23:50:40 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		*((unsigned char *)s + count) = (unsigned char)c;
		count++;
	}
	return (s);
}
int main()
{
	int array[] = {1,2,3,4,5};
	ft_memset(array,57,2 * sizeof(int));
	ft_memset(array + 1,5,2 * sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d\n",(unsigned char)array[i]);
		i++;
	}
	return 0;
}