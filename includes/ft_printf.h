/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:37:47 by adenord           #+#    #+#             */
/*   Updated: 2023/07/31 11:59:06 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/includes/libft.h"

int		ft_printf(const char *format, ...);
int		nbr_args(const char *format);
int		handling_args(const char *format, va_list args);
void	display_unsigned(int nbr);
void	display_hexa(int nbr, char *base);
void	display_address(unsigned long nbr);

#endif
