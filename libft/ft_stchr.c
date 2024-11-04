/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stchr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 16:39:54 by han           #+#    #+#                 */
/*   Updated: 2024/11/04 15:09:32 by han           ########   odam.nl         */
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