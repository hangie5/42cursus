/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:03:12 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:03:12 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlength;
	size_t	slength;

	slength = ft_strlen(src);
	dlength = ft_strlen(dst);
	j = dlength;
	i = 0;
	if (!dst && size == 0)
		return (slength);
	if (size <= dlength)
		return (size + slength);
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlength + slength);
}
