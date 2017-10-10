/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 22:13:38 by labrown           #+#    #+#             */
/*   Updated: 2017/10/07 01:25:42 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char w)
{
	size_t	i;
	size_t	hasword;
	size_t	wordcount;

	if (!s || !w)
		return (0);
	i = 0;
	wordcount = 0;
	while (s[i] != '\0')
	{
		hasword = 0;
		while (s[i] == w && s[i])
			i++;
		while (s[i] != w && s[i])
		{
			hasword = 1;
			i++;
		}
		while (s[i] == w && s[i])
			i++;
		if (hasword == 1)
			wordcount++;
	}
	return (wordcount);
}
