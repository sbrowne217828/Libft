/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:24:35 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 22:56:10 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	char	*ret;

	if (!s)
		return (NULL);
	a = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	a = ft_strlen(s) - 1;
	if (a == -1)
		return (ft_strnew(0));
	while (!s[a] || s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a--;
	ret = ft_strnew(++a);
	if (!ret)
		return (NULL);
	b = a;
	a = 0;
	while (a < b)
	{
		ret[a] = s[a];
		a++;
	}
	return (ret);
}
