/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:56:28 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/17 04:08:39 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmp1;
	const unsigned char	*tmp2;

	i = 1;
	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (tmp2 < tmp1)
		while (i <= len)
		{
			tmp1[len - i] = tmp2[len - i];
			i++;
		}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	}
	return (dest);
}
