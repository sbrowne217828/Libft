/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:06:03 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:08:57 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*r;

	r = (unsigned char *)s;
	if (!n)
		return (NULL);
	while (n)
	{
		if (*r == (unsigned char)c)
			return (r);
		r++;
		n--;
	}
	return (NULL);
}
