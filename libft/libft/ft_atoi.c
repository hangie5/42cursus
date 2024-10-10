/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 16:14:06 by tjlin         #+#    #+#                 */
/*   Updated: 2024/10/10 17:26:40 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	spaces(char *str, int	*ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 48 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = 1;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = spaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i];
		str[i] = 48;
		i++;
	}
	result *= 10;
	return (result);
}

// int main(void)
// {
//     char *s = "   ---+--+1234ab56789";
//     printf ("%d", ft_atoi(s));
// }
