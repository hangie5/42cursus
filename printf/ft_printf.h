/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/02 20:29:57 by tjlin         #+#    #+#                 */
/*   Updated: 2025/02/02 20:29:57 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define __CONVERTER "cspdiuxX%"

// Standard C Libraries

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

// Protoypes

void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char const *s, int fd);
int	print_str(char *str);


int		ft_nbrlen(int n);
char	*ft_itoa(int n);
int	print_nbr(int n);

int	ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int	print_hex(unsigned int num, const char format);

int	ptr_len(unsigned long num);
void	put_ptr(unsigned long num);
int	print_ptr(unsigned long long ptr);


int	print_unsigned(unsigned int nb);

int	arg_conversion(va_list args, const char conversion);
int	ft_printf(const char *str, ...);

#endif
