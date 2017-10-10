/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 00:09:44 by labrown           #+#    #+#             */
/*   Updated: 2017/10/01 00:50:09 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dc;
	char	*sc;
	size_t	i;

	i = (-1);
	dc = (char *)dst;
	sc = (char *)src;
	if (sc < dc)
	{
		while ((int)(--len) >= 0)
			*(dc + len) = *(sc + len);
	}
	else
	{
		while (++i < len)
			*(dc + i) = *(sc + i);
	}
	return (dst);
}
