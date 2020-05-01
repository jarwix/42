/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:11:16 by lpadisha          #+#    #+#             */
/*   Updated: 2020/04/30 19:07:22 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return 1;
	else 
		return 0;
}
int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha("A"));
}
