/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 11:55:09 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:08:02 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*r;
	size_t	len;

	len = 0;
	ret = NULL;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = ft_strnew(len);
	if (!ret)
		return (0);
	r = ret;
	while (*s1)
		*r++ = *s1++;
	while (*s2)
		*r++ = *s2++;
	*r = 0;
	return (ret);
}
