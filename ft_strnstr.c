/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:33:02 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:05:43 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i ;
    size_t j ;
     
    i = 0 ;
    if (little[i] == '\0') 
        return((char *)&big[0]) ;

    while(big[i] && i < len )
    {
        j = 0 ;
        while(  i + j < len && big[i +j ] == little[j])
            j++;
        if(little[j] == '\0')
            return((char *)&big[i]) ;
        i++;
    }
    
    return(NULL);

}
