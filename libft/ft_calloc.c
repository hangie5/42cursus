/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 14:15:21 by han           #+#    #+#                 */
/*   Updated: 2024/10/24 16:13:15 by han           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc (size_t count, size_t size)
{
	unsigned	char *temp;
	size_t	i;

	i = 0;
	if( size != 0 && count > SIZE_MAX / size)
        return(NULL);
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	return (temp);
}
