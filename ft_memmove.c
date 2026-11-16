/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 02:00:01 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 17:06:54 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest_1;
    const unsigned char *src_1;

    dest_1 = (unsigned char *)dest;
    src_1 = (const unsigned char *)src;

    if (src_1 > dest_1)
    {
        ft_memcpy(dest, src, n);
    }
    else
    {
        while (n > 0)
        {
            n--;
            dest_1[n] = src_1[n];
        }
    }
    return (dest);
}
#include <stdio.h>
#include <string.h>

int main()
{
    // printf(" %s", (char *)ft_memmove("hello", "hello", 5));
    printf(" %s", (char *)memmove("hello", "hello", 5));
}
