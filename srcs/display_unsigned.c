/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:31:17 by adenord           #+#    #+#             */
/*   Updated: 2023/07/29 11:08:36 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	display_unsigned(int nbr)
{
	long ov;

	if (nbr < 0)
	{
		nbr = -nbr;
		ov = (4294967295 - nbr) + 1;
		ft_putnbr(ov);
	}
	else
		ft_putnbr(nbr);
}
