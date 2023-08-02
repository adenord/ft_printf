/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:28:12 by adenord           #+#    #+#             */
/*   Updated: 2023/07/31 12:01:08 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_args(const char *format, va_list args)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				ft_putnbr(va_arg(args, int));
			if (format[i + 1] == 's')
				ft_putstr(va_arg(args, char*));
			if (format[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			if (format[i + 1] == '%')
				ft_putchar('%');
			if (format[i + 1] == 'u')
				display_unsigned(va_arg(args, int));
			if (format[i + 1] == 'x')
				display_hexa(va_arg(args, int), "0123456789abcdef");
			if (format[i + 1] == 'X')
				display_hexa(va_arg(args, int), "0123456789ABCDEF");
			if (format[i + 1] == 'p')
				display_address(va_arg(args, long));
			i++;
		}
		i++;
	}
	va_end(args);
	return (10);
}
