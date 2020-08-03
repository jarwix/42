/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 05:58:14 by lpadisha          #+#    #+#             */
/*   Updated: 2020/06/12 04:49:37 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	last = *lst;
	if (last == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next)
	       last = last->next;
	last->next = new;
}
