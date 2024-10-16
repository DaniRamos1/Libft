/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:55:59 by danramos          #+#    #+#             */
/*   Updated: 2024/10/09 12:57:25 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (d);
	if (d < s)
		return (ft_memcpy(d, s, n));
	while (n--)
		d[n] = s[n];
	return (d);
}
/*
int	main(void)
{
	char src[50] = "Hola, mundo!";
	char dest[50] = "hola";

	ft_memmove(dest, src, 50);
	printf("%s\n", dest);

	return (0);
}*/