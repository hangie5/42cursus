/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: han <han@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 16:39:30 by han           #+#    #+#                 */
/*   Updated: 2024/10/24 19:27:31 by han           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int int_len(long nbr);
static char *pre_conv(int len);

char *ft_itoa(int n)
{
    int len;
    int i;
    char *result;
    long nbr;

    nbr = n;
    len = int_len(nbr);
    result = pre_conv(len);
    if (!result)
        return (NULL);
    {
        result[i] = ((nbr % 10) + 48);
        nbr = nbr / 10;
        i--;
    }

    tmp = malloc((len + 1) * sizeof(char));
    if (!tmp)
        return (NULL);
    tmp[0] = '0';
    return (tmp);
}

static int_len(long nbr)
{
    int count;

    count = 0;ß
    if (nbr < 0)
    {
        count++;
        nbr = -nbr;
    }
    if (nbr == 0)
        count++;
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}
