/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 03:46:52 by lpadisha          #+#    #+#             */
/*   Updated: 2020/06/11 05:30:46 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*listadd;

	if (!(listadd = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	listadd->content = content;
	listadd->next = NULL;
	return (listadd);
}
