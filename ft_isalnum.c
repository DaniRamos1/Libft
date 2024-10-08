/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:06:59 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:20:32 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c<= '9'))
		return (1);
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	c;
	c = '1';

	
	printf("%d\n",ft_isalnum(c));
	
	return (0);
}
