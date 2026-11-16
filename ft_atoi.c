/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:25:45 by satalbi           #+#    #+#             */
/*   Updated: 2026/10/31 19:25:55 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int lobe (const char * nptr , int i , int sign)
{
	long result ;
	
	result = 0 ;
	while (nptr[i] >= '0' && nptr[i] <= '9'  )
	{
		if (result > ( 9223372036854775807 -( nptr[i] - '0')) /10)
		{
			if(sign ==-1 )
				return(0) ;
			else
				return(-1) ;
		}
		else
			result = (result * 10) + nptr[i] - '0';
		i++;
	}	
	return (result);
}
int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	  result = lobe(nptr , i, sign  )  ;
	return (sign * result);
}
