/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:08:30 by danramos          #+#    #+#             */
/*   Updated: 2024/10/07 12:41:33 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == ' ' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	r *= s;
	return (r);
}
/*
int	main(void)
{
	char c[20] = "-1";

	printf("%d\n", ft_atoi(c));
	return (0);
}*/