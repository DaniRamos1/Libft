/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:33:27 by danramos          #+#    #+#             */
/*   Updated: 2024/09/25 17:38:22 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%zu\n", ft_strlen("Hola, mundo!"));
	return (0);
}
