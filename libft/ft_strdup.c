/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:02:55 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:02:55 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s1);
	dest = (char *)malloc(sizeof(*s1) * i + 1);
	if (dest == 0)
	{
		return (NULL);
	}
	ft_memcpy(dest, s1, i);
	dest[i] = '\0';
	return (dest);
}
