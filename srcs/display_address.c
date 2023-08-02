/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_address.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:35:40 by adenord           #+#    #+#             */
/*   Updated: 2023/07/31 11:59:50 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_address(unsigned long adr)
{
	char	base[17];
	char	ret[19];
	int		i;

	i = 0;
	ft_strcpy(base, "0123456789abcdef");
	ft_putchar('0');
	ft_putchar('x');
	if (adr == 0)
		ft_putchar('0');
	while (adr > 0)
	{
		ret[i] = base[adr % 16];
		adr /= 16;
		i++;
	}
	ret[i] = '\0';
	ft_strrev(ret);
	ft_putstr(ret);
}
