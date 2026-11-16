/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:46:03 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 16:52:56 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_bzero(void *s, size_t n) 
{
    size_t i ;
    unsigned char *str ;
    str = (unsigned char *)s ;
    i = 0 ;
    while(i < n )
    {
        str[i] = 0 ;
        i++;
    }

} 
