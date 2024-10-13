/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:54:05 by danramos          #+#    #+#             */
/*   Updated: 2024/10/10 12:36:56 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)malloc(ft_strlen(s1) + 1);
	if (!d)
		return (NULL);
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
/*
int main(void)
{
	const char	s1[20] = "buenas tardes";
    printf("%s\n", ft_strdup(s1));
    return (0);
}
*/