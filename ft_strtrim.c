/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:55:35 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 19:57:51 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"



static int is_set(char const *set , char c )
{
    size_t i ;
    i = 0 ; 
    while(set[i])
    {
        if(set[i] == c)
            {
                return(1) ;
            }
        i++;
    }
    return(0) ;    
}
 static int ft_start(char const *s1, char const *set)
{
    int start ;   
    start = 0 ;
    
    while(s1[start])
    {
        if( !is_set(set , s1[start]))
            break ;
        start++;    
    }
    return (start) ;
}
static  int ft_end(char const *s1, char const *set)
{ 
    int end ;
    end = (int )ft_strlen((char*)s1) -1 ;
    
    while(end >=0)
    {
        if( !is_set(set , s1[end]))
            break ;
        end-- ;
    }
    return(end);
}
static int len_new_str(int start , int end)
{ 
    if (start > end)
        return(0)  ; 
    else
        return((end - start) + 1);
    
}

char *ft_strtrim(char const *s1, char const *set) 
{
    int start;
    int end ;
    int i ;
    int len;
    char *vv ;

    if(!set || !s1 )
        return(NULL);
    start = ft_start(s1,set);
    end = ft_end(s1,set);
    i = 0 ;
    len = len_new_str(start , end ) ;
    vv = malloc((len + 1) *sizeof(char)) ;
    if(vv == NULL)
        return(NULL);
    while(i <len )
    {
        vv[i] = s1[start];
        i++;
        start++;
    }
    vv[i] = '\0' ;
    return(vv);
}
