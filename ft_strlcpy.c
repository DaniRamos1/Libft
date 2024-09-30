/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:01:39 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:42:38 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int res;
    
    res = ft_strlen(src);
	if (size == 0)
        return (res);
	i = 0;
    while(i < size - 1 && src[i])
	{
			dst[i] = src[i];
			i++;
	}
    dst[i] = '\0';
    return (res);
}
#include <stdio.h>

int	main(void)
{
	char src[50] = "Hola, mundo!";
	char dst[50];

	printf("%ld\n",ft_strlcpy(dst, src, 2));

	return (0);
}
