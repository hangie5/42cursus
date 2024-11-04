/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 16:39:32 by han           #+#    #+#                 */
/*   Updated: 2024/10/24 19:28:16 by han           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    str = (unsigned char *) s;
    uc (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return ((void *) &str[i]);
        i++;
    }
    return (NULL);
}
