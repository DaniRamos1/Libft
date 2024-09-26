/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:50:52 by danramos          #+#    #+#             */
/*   Updated: 2024/09/26 17:01:43 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if((unsigned char) s1[i] != (unsigned char) s2[i])
            return (unsigned char) s1[i] - (unsigned char) s2[i];
        i++;
    }
    return (0);
}
#include <stdio.h>

int	main(void)
{
	char s1[50] = "Hola";
	char s2[50] = "Hello";

	printf("%d\n",ft_strncmp(s1, s2, 1));

	return (0);
}