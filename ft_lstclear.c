/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 04:55:26 by lpadisha          #+#    #+#             */
/*   Updated: 2020/06/12 05:56:21 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *list;

	if (lst == NULL)
		return ;
	list = *lst;
	while (list)
	{
		temp = list->next;
		(*del)(list->content);
		free(list);
		list = temp;
	}
	*lst = NULL;
}
