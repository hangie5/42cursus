/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:00:54 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:00:55 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp_ptr;

	temp_ptr = (char *) s;
	while (n > 0)
	{
		*(temp_ptr++) = 0;
		n--;
	}
}
