/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_integer_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:05:38 by adenord           #+#    #+#             */
/*   Updated: 2023/08/14 16:27:01 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*gen_excp(char *format, char *str)
{
	if (ft_strchr(format, '.'))
		str = precision(format, str);
	if (format[1] == '0' && !ft_strchr(format, '.') && !ft_strchr(format, '-'))
		str = zeroed(format, str);
	str = min_width(format, str);
	if (ft_strchr(format, '-'))
		left_aligned(str);
	return (str);
}

t_list	*fct_integer(t_list **lst, t_list *elem, int arg)
{
	t_list	*new;
	char	*content;

	content = elem->content;
	if (ft_strlen(content) == 2)
		new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_itoa(arg)));
	else 
		new = ft_lst_insert(*lst, &elem, ft_lstnew(gen_excp(content, ft_itoa(arg))));
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
