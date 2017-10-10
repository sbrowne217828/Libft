/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <labrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:15:24 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 23:07:37 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*dup;

	a = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	while (s1[a])
	{
		dup[a] = s1[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}
