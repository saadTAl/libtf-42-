/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:21:35 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 18:09:39 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) 
{
    size_t i ;
    const unsigned char *arr_s1 ;
    const unsigned char *arr_s2 ;
    i = 0 ;
    arr_s1 =  (const unsigned char *)s1 ;
    arr_s2 =  (const unsigned char *)s2 ;
    
    while(i < n)
    {
        if(arr_s1[i] != arr_s2[i])
        {
            return(arr_s1[i] - arr_s2[i]);
        }    
        i++ ;
    }
    
    return(0) ;
}