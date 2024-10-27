/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmore.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:46:07 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/27 04:07:25 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

int	ft_puthexa(unsigned long nb, int n)
{
	if (nb >= 16)
		n += (ft_puthexa(nb / 16, n));
	n += ft_putchar_m(hex[nb % 16]);
	return (n);
}

int	ft_putHEXA(unsigned long nb, int n)
{
	if (nb >= 16)
		n += (ft_puthexa(nb / 16, n));
	n += ft_putchar_m(ft_toupper(hex[nb % 16]));
	return (n);
}

int	ft_putint_unsigned(int nbr)
{
	int			i;
	unsigned	nb;

	i = 0;
	nb = (unsigned)nbr;
	if (nb > 9)
		i += ft_putint(nb / 10);
	i += ft_putchar_m((nb % 10) + '0');
	return(i);
}