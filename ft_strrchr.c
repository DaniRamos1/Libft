/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:48:05 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 13:00:40 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	int		c;
	char	s[50] = "Hola mundo";

	c = 'm';
	printf("%s \n", ft_strrchr(s, c));
	return (0);
}*/