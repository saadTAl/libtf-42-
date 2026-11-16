/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:00:31 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 13:50:26 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *p;

    p = malloc(sizeof(t_list));
    if (p == NULL)
        return (NULL);
    p->content = content;
    p->next = NULL;
    return (p);
}
