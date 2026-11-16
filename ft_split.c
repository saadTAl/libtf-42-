/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satalbi <satalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:14:47 by satalbi           #+#    #+#             */
/*   Updated: 2026/11/01 12:08:59 by satalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

static int	cal_word(char const *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

 static int	ft_len_word(int m, char const *s, char c)
{
	int	i;

	i = 0;
	while (s[m] && s[m] != c)
	{
		m++;
		i++;
	}
	return (i);
}

static void	free_alloc(char **vv, int i)
{
	while (i > 0)
	{
		i--;
		free(vv[i]);
		
	}
	free(vv);
}
static int ll(char **vv, int i, char const *s, char c )
{
	int k ;
	int j ;
	
	j = 0;
	while (i < cal_word(s, c))
	{
		while (s[j] == c)
			j++;
		vv[i] = malloc((ft_len_word(j, s, c) +1) * sizeof(char));
		if (vv[i] == NULL)
		{
			free_alloc(vv,  i);
			return (-1) ;
		}
		k = 0;
		while (k < ft_len_word(j , s , c))
		{
			vv[i][k] = s[j];
			k++;
			j++;
		}
		vv[i][k] = '\0';
		i++;
	}
	return (i) ;
} 

char	**ft_split(char const *s, char c)
{
	char	**vv;
	int	i;
	int	o;
	
	if (!s)
		return (NULL);
	
	i = 0 ;
	vv = malloc((cal_word(s, c) +1) * sizeof(char *));
	if (vv == NULL)
		return (NULL);
	 o= ll (vv , i ,  s , c  ) ;
	 if( o == -1)
	 	return (NULL) ;
	vv[o] = NULL;
	return(vv) ;
}