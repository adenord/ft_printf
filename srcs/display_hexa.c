/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:13:11 by adenord           #+#    #+#             */
/*   Updated: 2023/07/31 12:00:06 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_hexa(int nbr, char *base)
{
	long	ov;
	char	ret[9];
	int		i;

	i = 0;
	if (nbr == 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		nbr = -nbr;
		ov = (4294967295 - nbr) + 1;
	}
	else
		ov = nbr;
	while (ov > 0)
	{
		ret[i] = base[ov % 16];
		ov /= 16;
		i++;
	}
	ret[i] = '\0';
	ft_strrev(ret);
	ft_putstr(ret);
}
