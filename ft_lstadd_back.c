/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:26:22 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/11 16:02:41 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last; 
    
    last = ft_lstlast(*lst);
    if (*lst == NULL)
    {   
        *lst = new;
        new->next = NULL;
        return ;
    }    
    last->next = new;
    new->next = NULL;
}
