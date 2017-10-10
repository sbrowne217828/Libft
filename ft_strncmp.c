/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 22:12:03 by labrown           #+#    #+#             */
/*   Updated: 2017/10/08 02:12:07 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((unsigned char)s1[0] - (unsigned char)s2[0]);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	if ((ft_strlen(s2) == 0))
		return (1);
	i = 0;
	while (s1[i] == s2[i] && n > 0 && s1[i] && s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
