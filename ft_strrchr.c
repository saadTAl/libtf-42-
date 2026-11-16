/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:14:28 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 13:57:11 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{  
    size_t i ;
    i = 0 ;
    while(s[i])
        i++;
   
    if((char)c == '\0')
        return ((char *)&s[i]) ;
    
    while(i>0)
    {
        i--;
        if((char)c == s[i])
            return ((char *)&s[i]) ; 
    }
    return(NULL);
}

