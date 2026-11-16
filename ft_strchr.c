/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:56:13 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 13:54:18 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{

    size_t i ;
    i = 0 ; 

    while (s[i])
    {
        if(s[i] == (char)c )
            return((char *) &s[i])  ;  
        i++;
    }
    if ( (char)c == '\0')
        return ((char *)(&s[i])) ;
    return (NULL) ;

}



