/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:26:23 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 18:08:29 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i ;
    i = 0 ;
    const unsigned char *vv ;
    vv = (const unsigned char *)s ;

    while(i < n)
    {
        if(vv[i] == (unsigned char)c)
            return((void *)&vv[i]) ;
        i++;
    }
    return (NULL) ;
}