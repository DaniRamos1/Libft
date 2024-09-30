/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:08:45 by danramos          #+#    #+#             */
/*   Updated: 2024/09/26 16:35:19 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	if (ft_strlen(dst) >= size)
		ft_strlen(dst) = size;
	if ((ft_strlen(dst) == size)
        return (size + ft_strlen(src))
    if (ft_strlen(src) < size - ft_strlen(dst))
        ft_memcpy(dst + ft_strlen(dst), src, ft_strlen(src) + 1)
    else
    {
		ft_memcpy(dst + ft_strlen(dst), src, size - strlen(dst) - 1) dst[size
			- 1] = '\0';
    }
    return (ft_strlen(dst) + ft_strlen(src))
}