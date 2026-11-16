/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:21:47 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:42:53 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *c)
{
    free(c);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}
/*#include <stdio.h>
int main()
{
    int *i, *j, *k;
    i = malloc(4);
    j = malloc(4);
    k = malloc(4);
    if (!i || !j || !k)
    {
        free(j);
        free(k);
        free(i);
        return (1);
    }
    *i = 10;
    *j = 20;
    *k = 30;
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew(i));

    ft_lstadd_back(&head, ft_lstnew(j));
    ft_lstadd_back(&head, ft_lstnew(k));

    t_list *current = head;

    current = ft_lstlast(head);
    head->next->next = NULL;

    ft_lstdelone(current, del);
    printf(" %d \n ", *(char *)head->next->next);
}*/
