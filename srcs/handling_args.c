/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:28:12 by adenord           #+#    #+#             */
/*   Updated: 2023/07/28 17:50:49 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	handling_args(const char *format, va_list args, int size)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		else
		{
			if (format[i + 1] == 'd')
				ft_putnbr(va_arg(args, int));
			if (format[i + 1] == 's')
				ft_putstr(va_arg(args, char*));
			if (format[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			if (format[i + 1] == '%')
				ft_putchar('%');
			i++;
		}
		i++;
	}
	va_end(args);
	return (10);
}
