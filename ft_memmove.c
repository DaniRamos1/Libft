/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:55:59 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:29:36 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (memcpy(dest, src, n));
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
    return (dest);
}
#include <stdio.h>

int	main(void)
{
	char src[50] = "Hola, mundo!";
	char dest[50];

	ft_memmove(dest, src, 50);
	printf("%s\n", dest);

	return (0);
}