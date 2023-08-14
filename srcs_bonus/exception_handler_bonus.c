/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:30:42 by adenord           #+#    #+#             */
/*   Updated: 2023/08/14 16:05:17 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*formater(int len, int zeros, int i, char *minus, char *str)
{
	char	*cut;

	if (zeros > len)
		cut = ft_calloc((zeros + 1), sizeof(char));
	else
		return (str);
	if (minus)
		cut[0] = '-';
	while (++i < (zeros - len))
		cut[i] = '0';
	if (!minus)
		ft_strcat(cut, str);
	else
		ft_strcat(cut, minus);
	free(str);
	return (cut);
}

char	*zeroed(char *format, char *str)
{
	int		len;
	int		i;
	int		zeros;
	char	*cut;
	char	*minus;

	minus = NULL;
	len = ft_strlen(str);
	i = -1;
	zeros = ft_atoi(&format[1]);
	if (str[0] == '-')
	{
		i++;
		minus = &str[1];
		zeros++;
	}
	cut = formater(len, zeros, i, minus, str);
	return (cut);
}

char	*precision(char *format, char *str)
{
	int		len;
	int		i;
	int		zeros;
	char	*cut;
	char	*minus;

	minus = NULL;
	len = ft_strlen(str);
	i = -1;
	cut = ft_strchr(format, '.');
	zeros = ft_atoi(&cut[1]);
	if (str[0] == '-')
	{
		i++;
		len--;
		minus = &str[1];
		zeros++;
	}
	cut = formater(len, zeros, i, minus, str);
	return (cut);
}

char	*min_width(char *format, char *str)
{
	int		min_width;
	int		len;
	char	*ret;
	int		i;

	i = -1;
	len = ft_strlen(str);
	min_width = 0;
	while (!ft_isdigit(format[++i]));
	if (format[i - 1] == '0' || format[i - 1] == '-' || format[i - 1] == '%')
		min_width = ft_atoi(&format[i]);
	i = -1;
	if (min_width > len)
	{
		ret = ft_calloc(min_width + 1, sizeof(char));
		while (++i < (min_width - len))
			ret[i] = ' ';
		ft_strcat(ret, str);
		free(str);
		return (ret);
	}
	return (str);
}

void	left_aligned(char *str)
{
	int	y;
	int	i;

	i = 0;
	y = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		str[y] = str[i];
		i++;
		y++;
	}
	while (str[y])
	{
		str[y] = ' ';
		y++;
	}
}
