/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 16:39:39 by han           #+#    #+#                 */
/*   Updated: 2024/11/04 15:08:28 by han           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (s <= d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		while (n-- > 0)
			*(d++) = *(s++);
	return (dst);
}
