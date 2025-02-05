/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_pointer.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/02 20:29:46 by tjlin         #+#    #+#                 */
/*   Updated: 2025/02/03 20:00:48 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(unsigned long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	put_ptr(unsigned long num)
{
	if (num >= 16)
	{
		put_ptr(num / 16);
		put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	print_ptr(unsigned long long ptr)
{
	int	len;

	len = 2;
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (len += 3);
	}
	ft_putstr_fd("0x", 1);
	put_ptr(ptr);
	len += ptr_len(ptr);
	return (len);
}
