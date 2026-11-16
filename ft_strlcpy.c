/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 23:19:04 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 17:57:16 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len_src ;
    size_t i ;
    
    len_src = ft_strlen((char *)src) ;   
    i = 0 ;
    if(size == 0 ) 
        return(len_src) ;
    while(i < size-1  && src[i])
    { 
        dst[i] =  src[i] ;
        i++;
    }
    dst[i] = '\0';
    return (len_src)  ;
}
