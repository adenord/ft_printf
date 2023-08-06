/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_and_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:34:18 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 20:11:40 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	replace_and_add(t_list **lst, va_list args)
{
	char	*temp;
	t_list	*t_temp;

	t_temp = *lst;
	while (t_temp)
	{
		temp = t_temp->content;
		if (temp[0] == '%' && (temp[1] == 'd' || temp[1] == 'i'))
			t_temp = fct_integer(lst, t_temp, va_arg(args, int));
		if (temp[0] == '%' && temp[1] == 's')
			t_temp = fct_string(lst, t_temp, va_arg(args, char*));
		if (temp[0] == '%' && temp[1] == '%')
			t_temp = fct_string(lst, t_temp, "%");
		if (temp[0] == '%' && temp[1] == 'c')
			t_temp = fct_character(lst, t_temp, va_arg(args, int));
		if (temp[0] == '%' && temp[1] == 'u')
			t_temp = fct_unsigned(lst, t_temp, va_arg(args, int));
		if (temp[0] == '%' && (temp[1] == 'X' || temp[1] == 'x'))
			t_temp = fct_hexa(lst, t_temp, va_arg(args, int), temp[1]);
		if (temp[0] == '%' && temp[1] == 'p')
			t_temp = fct_address(lst, t_temp, va_arg(args, long));
		t_temp = t_temp->next;
	}
}
