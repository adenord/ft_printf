/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:28:12 by adenord           #+#    #+#             */
/*   Updated: 2023/07/28 17:11:22 by adenord          ###   ########.fr       */
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
			i++;
		}
		i++;
	}
	return (10);
}
