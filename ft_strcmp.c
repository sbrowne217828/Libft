/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 21:24:49 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 21:06:51 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;
	unsigned int	len;

	i = 0;
	len = (ft_strlen(s2) < ft_strlen(s1))
						? ft_strlen(s2) : ft_strlen(s1);
	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	while (len > 0)
	{
		if (d1[i] != d2[i])
			return (d1[i] - d2[i]);
		i++;
		len--;
	}
	return (d1[i] - d2[i]);
}
