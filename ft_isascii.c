/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:13:25 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:21:37 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	c;
	c = '1';

	
	printf("%d\n",ft_isascii(c));
	
	return (0);
}
