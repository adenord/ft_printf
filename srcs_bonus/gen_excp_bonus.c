/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_excp_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:58:16 by adenord           #+#    #+#             */
/*   Updated: 2023/08/17 10:56:46 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*gen_excp(char *format, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (ft_strchr(format, '.'))
		str = precision(format, str);
	if (format[1] == '0' && !ft_strchr(format, '.') && !ft_strchr(format, '-'))
		str = zeroed(format, str);
	str = min_width(format, str);
	if (ft_strchr(format, '-'))
		left_aligned(str, len);
	return (str);
}

char	*gen_excp_str(char *format, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (ft_strchr(format, '.'))
		str = precision_str(format, str);
	str = min_width(format, str);
	if (ft_strchr(format, '-'))
		left_aligned(str, len);
	return (str);
}

char	*gen_excp_adr(char *format, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	str = min_width(format, str);
	if (ft_strchr(format, '-'))
		left_aligned(str, len);
	return (str);
}

t_list	*gen_excp_chr(t_list *temp2, t_list **lst, t_list *elem, int arg)
{
	char	*spaces;
	char	*spaces_cut;
	t_list	*temp;
	t_list	*new;

	spaces = min_width(elem->content, ft_strdup(""));
	spaces_cut = ft_substr(spaces, 1, ft_strlen(spaces));
	free(spaces);
	temp = ft_lstnew(spaces_cut);
	if (ft_strchr((char *)elem->content, '-'))
	{
		new = ft_lst_insert(*lst, &elem, temp2);
		new->next = temp;
		temp->next = elem->next;
	}
	else
	{
		new = ft_lst_insert(*lst, &elem, temp);
		new->next = temp2;
		temp2->next = elem->next;
	}
	if (arg == 0)
		temp2->len = 1;
	return (new);
}
