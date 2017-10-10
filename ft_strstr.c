/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 22:34:35 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:30:56 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char *b;
	const char *l;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		b = big;
		l = little;
		while (*b && *l)
			if (*b++ != *l)
				break ;
			else
				l++;
		if (*l == 0)
			return ((char *)(big));
		big++;
	}
	return (NULL);
}
