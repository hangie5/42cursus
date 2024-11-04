/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 16:39:52 by han           #+#    #+#                 */
/*   Updated: 2024/11/04 15:09:24 by han           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word);
}

static void	ft_free(char **str, int i)
{
	while (i > 0)
	{
		free(str[i - 1]);
		i--;
	}
	free(str);
}

static char	**str_split(char const *s, char c, char **str, int i)
{
	size_t		wlen;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s;
			str[i] = ft_substr(s, 0, wlen);
			if (!str[i])
			{
				ft_free(str, i);
				return (NULL);
			}
			s += wlen;
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	**result;
	int		i;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!s || !str)
		return (NULL);
	result = str_split(s, c, str, i);
	return (result);
}
