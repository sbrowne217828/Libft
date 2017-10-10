/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 22:12:13 by labrown           #+#    #+#             */
/*   Updated: 2017/10/02 22:33:52 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	r = ft_strdup(s);
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, r[i]);
		i++;
	}
	return (r);
}
