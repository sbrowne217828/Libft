/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:31:09 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:17:09 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*r;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	r = ft_strdup(s);
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}
