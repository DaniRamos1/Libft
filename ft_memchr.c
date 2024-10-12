/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:02:13 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 12:46:53 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char *)c)
			return (p);
		p++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char    s[20] = "buenas tardes";
	ft_memchr(s, 'm', 5);
	printf("%s\n", s);
	return (0);
}*/