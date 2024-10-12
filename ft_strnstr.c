/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:40:10 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 12:59:48 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  i;
	size_t  j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)haystack) while (haystack[i] && i < len)
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