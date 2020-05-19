/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 05:11:27 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/20 00:27:55 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*temp;
	char	*to_return;

	if ((!s1) || (!set))
		return (NULL);
	temp = s1;
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (set[j])
		j++;
	if (i < j)
		return (NULL);
	while(ls


}
