/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordsize_w.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 01:28:48 by labrown           #+#    #+#             */
/*   Updated: 2017/10/07 02:39:02 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordsize_w(const char *s, char w)
{
	int		i;

	i = 0;
	if (!s || !w)
		return (0);
	while (s[i] != w && s[i] != '\0')
		i++;
	return (i);
}
