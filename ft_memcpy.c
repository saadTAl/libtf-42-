/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:52:08 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 17:06:03 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
   size_t i ;
   const unsigned char *vv1 ;
   unsigned char *vv ;
   
   i = 0 ;
   vv = (unsigned char *)dest ;
   vv1 = (const unsigned char *)src ;
   while (i < n )
   {
      vv[i]= vv1[i] ;
      i++;
   }
   return (dest) ;
}

