/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:26:29 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/15 22:17:16 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    
    if (!lst || !f || !del)
        return (NULL);
    new_lst = NULL;
    while (lst)
    {
        void *content_result = f(lst->content);
        t_list *new_node = ft_lstnew(content_result);

        if (!new_node)
        {
            ft_lstiter(new_lst, del);
            return NULL;
        }
        ft_lstadd_back(&new_lst, new_node);
        lst = lst->next;
    }
    return new_lst;
    
}