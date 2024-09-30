/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:59:02 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:49:28 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
#include <stdio.h>
int	main(void)
{
	char	c;
	c = 'a';

	
	printf("%c\n",ft_toupper(c));
	
	return (0);
}