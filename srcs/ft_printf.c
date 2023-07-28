/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:17:26 by adenord           #+#    #+#             */
/*   Updated: 2023/07/28 16:36:55 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			size;

	size = nbr_args(format);
	if (size == 0)
	{
		ft_putstr(format);
		return (ft_strlen(format));
	}
	va_start(args, format);
	return (handling_args(format, args, size));
}
