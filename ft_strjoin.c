/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:25 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 17:58:58 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *vv ;
    
    if(!s1 || !s2 )
        return(NULL);
    len = ft_strlen((char *)s1)  + ft_strlen((char *)s2) ;
    vv = malloc((len+ 1) * sizeof(char)) ;
    if(vv == NULL)
        return (NULL);
    vv[0] = '\0' ;
    ft_strlcat(vv, s1, len +1 ) ;
    ft_strlcat(vv, s2, len + 1 ) ;
    return(vv) ;
}
