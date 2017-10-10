/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 23:24:18 by labrown           #+#    #+#             */
/*   Updated: 2017/10/09 00:01:07 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *bi, const char *li, size_t len)
{
	const char	*b;
	const char	*l;
	const char	*temp;
	size_t		length;

	b = bi;
	if (*li == '\0')
		return ((char *)bi);
	while (*b && len > 0)
	{
		length = len;
		temp = b;
		l = li;
		while (*b && *l && *b == *l && length > 0)
		{
			b++;
			l++;
			length--;
		}
		if (*l == 0)
			return ((char *)(temp));
		len--;
		b = temp + 1;
	}
	return (NULL);
}
