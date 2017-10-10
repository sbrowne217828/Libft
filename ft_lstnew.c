/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:41:08 by labrown           #+#    #+#             */
/*   Updated: 2017/10/08 22:53:44 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;
	void	*c;

	fresh = (t_list *)malloc(sizeof(t_list));
	if (!fresh)
		return (0);
	if (content)
	{
		c = ft_memdup(content, content_size);
		if (!c)
		{
			free(fresh);
			return (0);
		}
		fresh->content = c;
		fresh->content_size = content_size;
	}
	else
	{
		fresh->content = 0;
		fresh->content_size = 0;
	}
	fresh->next = NULL;
	return (fresh);
}
