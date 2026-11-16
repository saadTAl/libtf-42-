/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 02:27:57 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:11:46 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) 
{
    char *vv ;
    size_t tot ;
    size_t i ;
    
   if (size == 0  ||  nmemb == 0)
        return (malloc(1)) ;
    if (nmemb > (size_t)-1  /size )
        return(NULL) ;
    
    
    tot = nmemb *size ; 
    vv = malloc (tot) ;
    if(vv == NULL )
        return (NULL) ;    
       
    i = 0 ;
    while(i < tot) 
    {
        vv[i] = 0 ; 
        i++;
    }
    return(vv) ;
}
