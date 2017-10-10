/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <labrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:15:24 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 22:42:37 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;

	a = len;
	while (len > 0)
	{
		((unsigned char *)b)[a - len] = (unsigned char)c;
		len--;
	}
	return (b);
}
