/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 17:20:15 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:17:48 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstsize;
	size_t		space_left;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	space_left = size;
	while (space_left-- != 0 && *d)
		d++;
	dstsize = (size_t)(d - dst);
	space_left = size - dstsize;
	if (space_left <= 0)
		return (size + ft_strlen(src));
	while (*s && space_left-- > 1)
		*d++ = *s++;
	while (*s)
		s++;
	*d = 0;
	return (dstsize + (size_t)(s - src));
}
