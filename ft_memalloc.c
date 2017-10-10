/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 12:28:36 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:25:22 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*buffer;

	buffer = malloc(size);
	if (!buffer)
		return (NULL);
	buffer = ft_memset(buffer, 0, size);
	return (buffer);
}
