/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cutting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:02:43 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 17:38:55 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*cutting(const char *format)
{
	int		i;
	t_list	*lst;
	int		start;

	i = 0;
	lst = NULL;
	while (format[i])
	{
		start = i;
		while (format[i] != '%' && format[i])
			i++;
		ft_lstadd_back(&lst, ft_lstnew(ft_substr(format, start, i - start)));
		start = i;
		if (format[i])
		{
			i++;
			while (ft_isdigit(format[i]) && format[i])
				i++;
			if (format[i] == 'u' || format[i] == 'i' || format[i] == 'd' || \
			format[i] == 'x' || format[i] == 'X' || format[i] == 's' || \
			format[i] == 'c' || format[i] == 'p' || format[i] == '%')
			{
				i++;
				ft_lstadd_back(&lst, ft_lstnew(ft_substr(format, start, i - start)));
			}
		}
	}
	return (lst);
}
