/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:44:06 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 00:20:35 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t  i;
    i = 0 ;
    if(!s)
        return;
    if (fd < 0)
        return;
    while(s[i])
    {
        write(fd, &s[i], 1) ;
        i++ ;
    }
    write(fd, "\n", 1);
}
