/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 01:41:08 by lpadisha          #+#    #+#             */
/*   Updated: 2020/04/30 16:56:18 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	ch;
	int	m;
	ch = 0;
	i = 0;
	while((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		ch = ch * 10;
		m = str[i] - '0';
		ch = ch + m;
		i++;
		printf("%d\n", ch);
	}
	return ch;
}

int	main(void)
{
	int man = atoi("1551fsdfsd");
	int lan = ft_atoi("1551fsdfsd");
	printf("%d\n", man);
	printf("%d\n", lan);
	return 0;
}
