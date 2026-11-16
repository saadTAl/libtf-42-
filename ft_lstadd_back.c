/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:50:40 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:41:14 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;
    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    current = ft_lstlast(*lst);
    current->next = new;
}
/*#include <stdio.h>
int main()
{
    int i = 90, o = 80, z = 79;

    t_list a, b, c;

    a.content = &i;
    b.content = &o;
    c.content = &z;

    a.next = &b;
    b.next = NULL;
    c.next = NULL;

    t_list *head = &a;
    t_list *head1 = NULL;
    ft_lstadd_back(&head1, &c);
    while (head1 != NULL)
    {
        printf(" %d\n", *(int *)head1->content);
        head1 = head1->next;
    }
}*/
