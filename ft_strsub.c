/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 23:53:23 by labrown           #+#    #+#             */
/*   Updated: 2017/10/04 11:21:33 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	sub = ft_strnew(len);
	if (!sub)
		return (0);
	sub = ft_strncpy(sub, s + start, len);
	sub[len] = 0;
	return (sub);
}
