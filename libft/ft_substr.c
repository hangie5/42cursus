/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:03:46 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:03:47 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (start >= ft_strlen(s))
	{
		dst = (char *)malloc(1);
		if (!dst)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dst = (char *)malloc(len + 1);
	if (!s || !dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
