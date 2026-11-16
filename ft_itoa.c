/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 00:55:58 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 13:48:40 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int ft_len_n(long  n)
{
    int i;
    
    i = 0 ; 
    if(n < 0 )
        n =-n ;
    if(n == 0 )
        return (1);
    while(n > 0 )
    {
        
        i++ ;
        n = n/10 ;
    }
    return(i) ;   
}
static void ll(char *vv, long n ,int len  )
{
    if(n >= 0)
    {
        vv[len] = '\0' ;
        while(len > 0)
        {
            len--;  
            vv[len] = (n%10) +'0' ;
            
            n =n /10 ;
        } 
    }
    else 
    {
        len +=1 ;
        n  = -n ;
        vv[len] = '\0' ;
        while(len >0 )
        {
            len--;
            vv[len] = (n%10) +'0' ;
            n =n /10 ;
        } 
        vv[0] = '-';
    }
   
}
char *ft_itoa(int n)
{
    char *vv ;
    int len_n ;

    len_n = ft_len_n((long )n) ;
    if(n >= 0)
        vv = malloc((len_n +1)* sizeof(char)) ;
    else
        vv = malloc((len_n +2)* sizeof(char)) ;
    if(vv == NULL)
        return(NULL);
     ll(vv,  (long)n ,len_n ) ;
    return(vv) ;
}
