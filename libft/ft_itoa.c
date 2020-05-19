/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 02:12:04 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/20 03:19:03 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char_to_itoa(int numbers, char *temp, size_t flag, size_t size)
{
	unsigned int	i;

	i = 0;
	if (flag == 1)
	{
		temp[i] = '-';
		i++;
		size += 1;
	}
	temp[size + 1] = '\0';
	size--;
	while(size >= i)
	{
		temp[size] = numbers % 10 + '0';
		numbers /= 10;
		size--;
	}
	return (temp);
}

char	*ft_itoa(int n)
{
	size_t		size;
	unsigned int	numbers;
	char		*temp;
	size_t		flag;

	flag = 0;
	size = 0;
	if (n >= 0)
		numbers = n;
	else
	{
		numbers = n * -1;
		flag = 1;
	}
	while (numbers > 0)
	{
		numbers = numbers / 10;
		size += 1;
	}
	numbers = n;
	if (flag == 0)
		if(!(temp = (char *)malloc(sizeof(char) * (size + 1))))
			return (NULL);
	if (flag == 1)
		if(!(temp = (char *)malloc(sizeof(char) * (size + 2))))
                        return (NULL);
	return (ft_char_to_itoa(numbers, temp, flag, size));
}
