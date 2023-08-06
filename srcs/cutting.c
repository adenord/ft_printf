/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cutting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:02:43 by adenord           #+#    #+#             */
/*   Updated: 2023/08/06 17:26:16 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_keyword(char c)
{
	if (c == 'u' || c == 'i' || c == 'd' || c == 'x' || c == 'X' || c == 's' \
	||c == 'c' || c == 'p' || c == '%')
		return (1);
	return (0);
}

t_list	*cutting(const char *fmt)
{
	int		i;
	t_list	*lst;
	int		y;

	i = 0;
	lst = NULL;
	while (fmt[i])
	{
		y = i;
		while (fmt[i] != '%' && fmt[i])
			i++;
		ft_lstadd_back(&lst, ft_lstnew(ft_substr(fmt, y, i - y)));
		y = i;
		if (fmt[i])
		{
			i++;
			while (ft_isdigit(fmt[i]) && fmt[i])
				i++;
			if (is_keyword(fmt[i++]))
				ft_lstadd_back(&lst, ft_lstnew(ft_substr(fmt, y, i - y)));
		}
	}
	return (lst);
}
