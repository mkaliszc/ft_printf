/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:41:58 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/27 21:23:09 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_printf(const char *str, ...)
{
	size_t		i;
	int			return_value;
	va_list		arg;

	i = 0;
	return_value = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == 'c')
		{
			return_value += ft_putchar_m(va_arg(arg, int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 's')
		{
			return_value += ft_putstr_m(va_arg(arg, char *));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'p')
		{
			return_value += ft_putptr(va_arg(arg, void *));
			i++;
		}
		else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
		{
			return_value += ft_putint(va_arg(arg, int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'u')
		{
			return_value += ft_putint_unsigned(va_arg(arg, unsigned int));
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'x')
		{
			ft_puthexa(va_arg(arg, unsigned int), return_value);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'X')
		{
			ft_putHEXA(va_arg(arg, unsigned int), return_value);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			return_value += ft_putchar_m('%');
			++i;
		}
		else
		{
			write(1, &str[i], 1);
			return_value++;
		}
		i++;
	}
	va_end(arg);
	return (return_value);
}

int main()
{
	printf("%d\n", ft_printf("function 1 : %X ----> ", 15));
	printf("%d\n", printf("function 2 : %X  ----> ", 15));
	return(0); 
}
