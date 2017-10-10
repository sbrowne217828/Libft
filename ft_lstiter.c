/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 20:31:14 by labrown           #+#    #+#             */
/*   Updated: 2017/10/05 20:45:57 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*nx_node;

	nx_node = lst;
	while (nx_node != NULL)
	{
		(*f)(nx_node);
		nx_node = nx_node->next;
	}
	return ;
}
