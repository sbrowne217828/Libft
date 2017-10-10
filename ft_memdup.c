/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 19:03:20 by labrown           #+#    #+#             */
/*   Updated: 2017/10/07 19:37:09 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *mem, size_t size)
{
	void	*ret;

	ret = (void*)malloc(size);
	if (!ret)
		return (0);
	ft_memcpy(ret, mem, size);
	return (ret);
}
