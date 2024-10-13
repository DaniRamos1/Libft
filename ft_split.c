/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 02:12:51 by danramos          #+#    #+#             */
/*   Updated: 2024/10/12 04:26:30 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(const char *str, char c);
static char	*ft_fill(const char *str, int start, int end);
static void	*ft_free(char **strs, int count);
static void	ft_init(size_t *i, int *j, int *w);

char	**ft_split(const char *s, char c)
{
	char	**r;
	size_t	i;
	int		j;
	int		w;

	ft_init(&i, &j, &w);
	r = ft_calloc((w_count(s, c) + 1), sizeof(char *));
	if (!r)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && w < 0)
			w = i;
		else if ((s[i] == c || i == ft_strlen(s)) && w >= 0)
		{
			r[j] = ft_fill(s, w, i);
			if (!(r[j]))
				return (ft_free(r, j));
			w = -1;
			j++;
		}
		i++;
	}
	return (r);
}

static void	ft_init(size_t *i, int *j, int *word)
{
	*i = 0;
	*j = 0;
	*word = -1;
}

static void	*ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static char	*ft_fill(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	w_count(const char *str, char c)
{
	int	count;
	int	z;

	count = 0;
	z = 0;
	while (*str)
	{
		if (*str != c && z == 0)
		{
			z = 1;
			count++;
		}
		else if (*str == c)
			z = 0;
		str++;
	}
	return (count);
}
/*
int main(void)
{
    printf("%i\n", w_count("buenas tardes", ' '));
    return (0);
}
*/