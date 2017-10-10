/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:00:53 by labrown           #+#    #+#             */
/*   Updated: 2017/10/05 19:07:58 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*holder_node;

	holder_node = *alst;
	*alst = 0;
	del(holder_node->content, holder_node->content_size);
	free(holder_node);
	holder_node = 0;
	return ;
}
