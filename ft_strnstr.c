/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:40:10 by danramos          #+#    #+#             */
/*   Updated: 2024/10/14 10:57:59 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return (((char *)haystack));
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && haystack[i + j]
			&& (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char	haystack[20] = "buenas tardes";
	const char	needle[20] = "tar";
    printf("%s\n", ft_strnstr(haystack, needle, 20));
    return (0);
}*/