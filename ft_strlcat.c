/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:34:26 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 18:01:19 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
        
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_src ;
    size_t len_dest ;
    size_t i ;

    len_src = ft_strlen((char *)src) ;
    if(size == 0 )
        return(len_src) ;    
    len_dest = 0 ;
    while( len_dest <size && dst[len_dest])
        len_dest++;
    if( len_dest == size)
        return(len_dest + len_src) ;    
    i = 0;
    while((len_dest + i  <  size - 1) &&  src[i])
    {
        dst[len_dest + i] = src[i];
        i++;
    }
    dst[len_dest +i] = '\0' ;
    return(len_dest + len_src) ;
    
}
