/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:11:29 by lpadisha          #+#    #+#             */
/*   Updated: 2020/04/30 20:29:19 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	ft_islower(int c)
{
	if((c >= 'a') && (c <= 'z'))
		return 1;
	else
		return 0;
}

int	main(void)
{
	printf("%d\n", islower('A'));
	printf("%d\n", ft_islower('A'));
	return 0;
}
