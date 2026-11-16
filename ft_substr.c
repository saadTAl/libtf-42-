/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:13:34 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 17:56:55 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *vv ;
    size_t i ; 
    size_t len_s; 
    if(!s )
        return(NULL) ;
    
    len_s = ft_strlen((char *)s) ;
    if(start >= len_s)
         return(ft_strdup("")) ; 
    if (len > len_s - start)
		len = len_s - start;  
    vv = malloc((len +1) * sizeof(char)) ;
    if(vv == NULL) 
        return (NULL);
    i = 0 ; 
    while(i < len && s[start] )
    {
        vv[i] =s[start];
        start++ ;
        i++ ;
    }
    vv[i] = '\0' ;
    return (vv) ;
}

