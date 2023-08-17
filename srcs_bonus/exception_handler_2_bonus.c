/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler_2_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:41:33 by adenord           #+#    #+#             */
/*   Updated: 2023/08/15 10:50:20 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*precision_str(char *format, char *str)
{
	int		len;
	int		zeros;
	char	*cut;

	len = ft_strlen(str);
	cut = ft_strchr(format, '.');
	zeros = ft_atoi(&cut[1]);
	if (zeros < len)
	{
		cut = ft_substr(str, 0, len - (len - zeros));
		free(str);
		return (cut);
	}
	else
		return (str);
}
