/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:51:30 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:39:34 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int i;
    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

#include <stdio.h>
int main()
{
    t_list *a, *b, *c;

    char *s1 = "abc";
    char *s2 = "def";
    char *s3 = "xzb";

    a = ft_lstnew(s1);
    b = ft_lstnew(s2);
    c = ft_lstnew(s3);

    if (!a || !b || !c)
    {
        free(a);
        free(b);
        free(c);
        return (1);
    }
    t_list *head = NULL;
    ft_lstadd_front(&head, c);
    ft_lstadd_front(&head, b);
    ft_lstadd_front(&head, a);
    t_list *m = head;
    while (head != NULL)
    {
        printf(" %s\n", (char *)head->content);
        head = head->next;
    }
    printf(" %d \n", ft_lstsize(m));
    free(a);
    free(b);
    free(c);
}