/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:45:52 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 14:13:57 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strdup(const char *s)
{

    size_t i ;
    size_t len_s ;
    char *copie ;
    i = 0 ;
    len_s = ft_strlen((char *)s) ;
    copie = malloc((len_s +1) * sizeof(char)) ; 

    if (copie == NULL) 
        return(NULL) ;
    while(s[i]) 
    {
        copie[i] = s[i]  ;
        i++;
    }
    copie[i] = '\0' ;
    return(copie) ;
}
