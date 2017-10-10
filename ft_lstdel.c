/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 19:08:30 by labrown           #+#    #+#             */
/*   Updated: 2017/10/05 19:43:31 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*move;

	list = *alst;
	while (list)
	{
		move = list->next;
		del(list->content, list->content_size);
		free(list);
		list = move;
	}
	*alst = NULL;
	return ;
}
