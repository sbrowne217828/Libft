/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:20:46 by labrown           #+#    #+#             */
/*   Updated: 2017/10/02 15:25:27 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char	*ret;
	size_t	size;

	if (!s)
		return ;
	size = ft_strlen(s);
	ret = ft_memset(s, '\0', size);
	return ((void)ret);
}
