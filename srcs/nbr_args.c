/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:55:28 by adenord           #+#    #+#             */
/*   Updated: 2023/07/31 12:01:50 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbr_args(const char *format)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
			ret++;
		i++;
	}
	return (ret);
}
