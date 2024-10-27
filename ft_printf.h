/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:03:10 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/27 04:07:37 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#ifndef hex
# define hex "0123456789abcdef"
#endif

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar_m(int c);
int	ft_putstr_m(char *str);
int	ft_puthexa(unsigned long nb, int n);
int ft_putptr(void *ptr);
int	ft_putint(int nbr);
int	ft_putint_unsigned(int nbr);
int	ft_putHEXA(unsigned long nb, int n);

# endif