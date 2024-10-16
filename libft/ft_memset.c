/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 17:33:53 by tjlin         #+#    #+#                 */
/*   Updated: 2024/10/10 18:27:57 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t length)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) b;
	while (length > 0)
	{
		*(temp_ptr++) = (unsigned char) c;
		length--;
	}
	return (b);
}
