/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:24:13 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 22:45:05 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		digi;
	char	*ret;
	int		sign;

	sign = (n < 0) ? -1 : 1;
	digi = ft_digits(n);
	ret = (char *)malloc(sizeof(char) * digi + 1);
	if (!ret)
		return (NULL);
	ret[digi] = '\0';
	digi--;
	while (digi >= 0)
	{
		ret[digi] = '0' + ft_absval(n % 10);
		n = ft_absval(n / 10);
		digi--;
	}
	if (sign == -1)
		ret[0] = '-';
	return (ret);
}
