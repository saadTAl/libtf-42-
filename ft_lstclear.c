/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:21:42 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:43:41 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *t;
    if (!lst || !del)
        return;
    while (*lst != NULL)
    {
        t = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = t;
    }
}
