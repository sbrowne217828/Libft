/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:48:19 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 22:40:54 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					plus_neg;
	const char			*endpoint;
	unsigned long long	result;

	result = 0;
	plus_neg = 1;
	endpoint = ft_endofnum((char *)str);
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		plus_neg = ((*str) == '+') ? 1 : -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = (result * 10LL) + (unsigned long long)(*str++ - '0');
	return ((plus_neg) * (int)(result));
}
