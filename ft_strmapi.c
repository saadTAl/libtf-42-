/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 02:33:13 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 19:58:58 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *vv ;
    size_t i ;
    
    i = 0 ;
    if(!s || !f)
        return(NULL);
    vv= malloc((ft_strlen((char *)s) +1) *sizeof(char)) ;
    if(vv== NULL)
        return(NULL);
    
    while(s[i])
    {
        vv[i] =f(i,s[i]) ;
        i++;
    }
    vv[i] ='\0' ;
    return(vv);
}
