/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 05:11:27 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/21 05:55:19 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		delete_chars(char sc, char const *c)
{
	while (*c)
	{
		if (sc == *c)
			return (1);
		c++;
	}
	return (0);
}

int		size_return(char const *s1, int i, int j)
{
	int			s;

	if (i == j || !*s1)
		s = 2;
	else if (i < j)
		s = 1;
	else
		s = (i - j) + 2;
	return (s);
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
	while (s1[j] && delete_chars(s1[j], set))
		j++;
	if ((i = strlen(s1) - 1) != -1)
		while (i >= 0 && delete_chars(s1[i], set))
			i--;
	size = size_return(s1, i, j);
	if (!(temp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size - 1)
		temp[i++] = s1[j++];
	temp[i] = '\0';
	return (temp);
}
