/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:52:54 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 16:14:37 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *dofi(void *l)
{
    int *i = malloc(4);
    *i = *(int *)l;
    *i *= 2;
    return (i);
}

void del(void *c)
{
    free(c);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *p;
    t_list *new_node;
    void *content;

    if (!lst || !f || !del)
        return (NULL);
    p = NULL;
    while (lst != NULL)
    {

        content = f(lst->content);

        new_node = ft_lstnew(content);
        if (!new_node)
        {
            del(content);
            ft_lstclear(&p, del);
            return (NULL);
        }
        ft_lstadd_back(&p, new_node);
        lst = lst->next;
    }
    return (p);
}

#include <stdio.h>

int main()
{
    t_list *a, *b, *c;

    int *i, *j, *k;

    i = malloc(4);
    j = malloc(4);
    k = malloc(4);

    *i = 90;
    *j = 80;
    *k = 70;

    if (!i || !j || !k)
    {
        free(i);
        free(j);
        free(k);
        return (1);
    }
    t_list *head = NULL;
    ft_lstadd_back(&head, ft_lstnew(i));
    ft_lstadd_back(&head, ft_lstnew(j));
    ft_lstadd_back(&head, ft_lstnew(k));
    t_list *current = ft_lstmap(head, dofi, del);

    while (current)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }
    printf("%d\n", *(int *)head->content);
}