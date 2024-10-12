/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:54:01 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 12:47:17 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (p1[i] || p2[i]))
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[50] = "Hola";
	char s2[50] = "Hala";

	printf("%d\n", ft_memcmp(s1, s2, 50));

	return (0);
}*/