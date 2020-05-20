/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 05:11:27 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/21 00:26:16 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		delete_chars(char sc, char const *c)
{
	while (c)
	{
		if (sc == *c)
			return (1);
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*temp;
	int			i;
	int			j;
	int			size;

	if ((!s1) || (!set))
		return (NULL);
	i = 0;
	j = 0;
	if (s1[j] && delete_chars(s1[j], set))
		j++;
	if ((i = strlen(s1) - 1) != -1)
		while (i >= 0 && delete_chars(s1[i], set))
			i--;
	if (i == j && !*s1)
		size = 2;
	else
		size = (j - i) + 2;
	if (!(temp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	j = 0;
	while (i < size)
		temp[j++] = s1[i++];
	temp[j] = '\0';
	return (temp);
}
