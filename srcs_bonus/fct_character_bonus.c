/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_character_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:37:03 by adenord           #+#    #+#             */
/*   Updated: 2023/08/11 18:42:19 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_list	*fct_character(t_list **lst, t_list *elem, int arg)
{
	t_list	*new;
	char	temp[2];

	temp[0] = (char)arg;
	temp[1] = '\0';
	new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_strdup(temp)));
	if (arg == 0)
		new->len = 1;
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
