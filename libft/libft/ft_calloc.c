/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:00:59 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:01:00 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*array;
	size_t		s;

	if (count == 0 || size == 0)
		return (malloc(0));
	s = count * size;
	if (count != s / size)
		return (NULL);
	array = (void *)malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
