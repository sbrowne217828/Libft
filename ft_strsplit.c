/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 21:35:11 by labrown           #+#    #+#             */
/*   Updated: 2017/10/07 02:51:05 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(char const *s, char c)
{
	size_t		loc;
	char		**ret;
	size_t		i;

	if (!s || !c)
		return (NULL);
	loc = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			i = 0;
			ret[loc] = (char*)malloc(sizeof(char) * (ft_wordsize_w(s, c) + 1));
			while (ft_wordsize_w(s, c) > 0)
				ret[loc][i++] = *s++;
			ret[loc++][i] = '\0';
		}
		else
			s++;
	}
	ret[loc] = 0;
	return (ret);
}
