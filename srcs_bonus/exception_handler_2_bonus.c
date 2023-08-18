/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler_2_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:41:33 by adenord           #+#    #+#             */
/*   Updated: 2023/08/18 18:58:42 by adenord          ###   ########.fr       */
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

char	*plus_header(char *str, int len)
{
	int		nbr;
	char	*ret;

	nbr = ft_atoi(str);
	if (nbr >= 0)
	{
		ret = ft_calloc(len + 2, sizeof(char));
		ft_strcat(ret, "+");
		ft_strcat(ret, str);
		free(str);
		str = ret;
	}
	return (str);
}

char	*hex_header(char *format, char *str)
{
	char	*ret;

	if (ft_strlen(str) == 1 && str[0] == '0')
		return (str);
	ret = ft_calloc(ft_strlen(str) + 3, sizeof(char));
	if (format[ft_strlen(format) - 1] == 'x')
		ft_strcat(ret, "0x");
	else
		ft_strcat(ret, "0X");
	ft_strcat(ret, str);
	free(str);
	return (ret);
}
