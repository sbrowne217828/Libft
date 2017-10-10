/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 18:45:52 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:16:09 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char *s;
	unsigned char		*r;
	size_t				i;

	i = 0;
	s = (unsigned const char *)src;
	r = (unsigned char *)dst;
	while (i < n)
	{
		*r++ = *s;
		if (*s++ == (unsigned char)c)
			return (r);
		i++;
	}
	return (NULL);
}
