/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:26:38 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 12:53:49 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
