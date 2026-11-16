/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:43:53 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 16:52:19 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memset(void *s, int c, size_t n )

{
    size_t i;
    unsigned char *str;
    str  = (unsigned char *)s ;
    i = 0 ;
    while(i < n) 
    {
        str[i] = (unsigned char )c ;
        i++ ;
    }
    return (s) ;
}
