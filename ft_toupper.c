/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <labrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:15:24 by labrown           #+#    #+#             */
/*   Updated: 2017/10/06 22:58:02 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	while (c)
	{
		if (c >= 97 && c <= 122)
			return (c - 32);
		else
			return (c);
	}
	return (0);
}
