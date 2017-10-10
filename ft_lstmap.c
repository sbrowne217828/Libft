/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 20:49:49 by labrown           #+#    #+#             */
/*   Updated: 2017/10/08 00:19:54 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*modlst;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (0);
	temp = f(lst);
	modlst = temp;
	while ((lst->next != 0))
	{
		lst = lst->next;
		temp->next = f(lst);
		temp = temp->next;
	}
	return (modlst);
}
