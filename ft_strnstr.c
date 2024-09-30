/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danramos <danramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:40:10 by danramos          #+#    #+#             */
/*   Updated: 2024/09/30 17:49:26 by danramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *  ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if ( little[0] == '\0')
        return ((char *)big)
    while ( big[i] != '\0')
    {
        j = 0;
        while (big[i + j] == little[j] && (i + j) < len)
        
    }
}