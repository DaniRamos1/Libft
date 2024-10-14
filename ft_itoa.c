/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:50:31 by danramos          #+#    #+#             */
/*   Updated: 2024/10/14 10:53:59 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*as(int len)
{
	return (malloc((len + 1) * sizeof(char)));
}

static int	count(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len = 1;
		if (num < 0)
			num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	fill_num(char *r, long num, int len)
{
	int	i;

	i = len - 1;
	while (num > 0)
	{
		r[i--] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*r;

	num = n;
	len = count(num);
	r = as(len);
	if (!r)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		r[0] = '-';
	}
	else if (num == 0)
		r[0] = '0';
	fill_num(r, num, len);
	r[len] = '\0';
	return (r);
}
/*
int main()
{
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-42));
	return (0);
}
*/