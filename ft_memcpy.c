/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:25:20 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:26:55 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char src[50] = "Hola, mundo!";
	char dest[50];

	ft_memcpy(dest, src, 50);
	printf("%s\n", dest);

	return (0);
}