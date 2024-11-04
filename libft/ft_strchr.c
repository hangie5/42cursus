/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 17:00:45 by tjlin         #+#    #+#                 */
/*   Updated: 2024/11/04 17:00:47 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			sc;

	sc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == sc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == sc)
		return ((char *) &s[i]);
	return (NULL);
}
